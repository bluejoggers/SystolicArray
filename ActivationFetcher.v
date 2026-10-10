module activation_fetcher #(
    parameter NUM_LANES  = 8,
    parameter DATA_WIDTH = 8
)(
    input  wire                                clock,
    input  wire                                reset,

    // External Streaming Pad Interface
    input  wire                                act_valid,
    output wire                                act_ready,
    input  wire [DATA_WIDTH-1:0]               act_data,

    // Interface to Controller / Host Sequencer
    output reg                                 word_valid,
    input  wire                                word_ack,

    // 64-bit Data Vector to UB host_write_data
    output reg  [(NUM_LANES*DATA_WIDTH)-1:0]   act_out
);

    localparam TOTAL_WIDTH = NUM_LANES * DATA_WIDTH;

    reg [$clog2(NUM_LANES)-1:0] byte_counter; // Counts bytes received for current 64-bit word

    // Backpressure: pause external stream while waiting for UB to consume word
    assign act_ready = !word_valid;

    always @(posedge clock) begin
        if (reset) begin
            act_out    <= {TOTAL_WIDTH{1'b0}};
            byte_counter   <= '0;
            word_valid <= 1'b0;
        end else begin
            if (word_ack) begin
                word_valid <= 1'b0;
            end

            if (act_valid && act_ready) begin
                // Shift in new byte at bottom, push older bytes up
                act_out <= {act_out[TOTAL_WIDTH-DATA_WIDTH-1:0], act_data};

                if (byte_counter == NUM_LANES - 1) begin
                    byte_counter   <= '0;
                    word_valid <= 1'b1; // 64-bit row ready for UB
                end else begin
                    byte_counter <= byte_counter + 1'b1;
                end
            end
        end
    end

endmodule