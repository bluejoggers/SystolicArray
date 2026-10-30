

module WeightFetcher #(
    parameter NUM_LANES = 8,
    parameter DATA_WIDTH = 8
)(
    input  wire        clock,
    input  wire        reset,

    // Pad inputs (8-bit streaming)
    input  wire        w_valid,
    output wire        w_ready,
    input  wire [(DATA_WIDTH-1):0]  w_data,

    // To Controller
    output reg         word_valid, // 1-cycle pulse: "64-bit slice ready"
    input  wire        word_ack,   // Controller says: "I clocked it into the array"

    // To arraydatapath.weight_in
    output reg  [(NUM_LANES*DATA_WIDTH)-1:0] weight_out
);

    localparam TOTAL_WIDTH = NUM_LANES * DATA_WIDTH;
    localparam COUNTER_WIDTH = $clog2(NUM_LANES);
    localparam LAST_INT = NUM_LANES-1;
    localparam [COUNTER_WIDTH-1:0] LAST_BYTE = LAST_INT[COUNTER_WIDTH-1:0]; // Last byte index for the current 64-bit word

    reg [COUNTER_WIDTH-1:0] byte_counter; // Counts bytes received for current 64-bit word

    // Always ready unless waiting for controller to clock the current 64-bit word
    assign w_ready = !word_valid;

    always @(posedge clock) begin
        if (reset) begin
            weight_out  <= {(NUM_LANES*DATA_WIDTH){1'b0}};
            byte_counter   <= 3'd0;
            word_valid <= 1'b0;
        end else begin
            if (word_ack) begin
                word_valid <= 1'b0; // Controller consumed the word
            end

            if (w_valid && w_ready) begin
                // Shift in next byte
                // Takes bits [55:0] and shifts them up, putting w_data into [7:0]
                weight_out <= {weight_out[TOTAL_WIDTH-DATA_WIDTH-1:0], w_data};

                if (byte_counter == LAST_BYTE) begin
                    byte_counter   <= '0;
                    word_valid <= 1'b1; // Tell controller: 64 bits ready
                end else begin
                    byte_counter   <= byte_counter + 1'b1;
                end
            end
        end
    end

endmodule
