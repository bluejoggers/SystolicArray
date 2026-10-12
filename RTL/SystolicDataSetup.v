module systolic_stagger_block #(
    parameter NUM_LANES = 8,
    parameter DATA_WIDTH = 8 // INT8 Activations from Unified Buffer
)(
    input  logic clock,
    input  logic reset,
    input  logic valid_in,
    input  logic [NUM_LANES*DATA_WIDTH-1:0] vector_in,
    
    output logic [NUM_LANES-1:0]             valid_out,
    output logic [NUM_LANES*DATA_WIDTH-1:0] vector_out
);
    genvar r;
    generate
        for (r = 0; r < NUM_LANES; r = r + 1) begin : row_stagger
            
            if (r == 0) begin : lane_zero
                // Lane 0 passes straight through with 0 clock cycle delay
                assign vector_out[0 +: DATA_WIDTH] = vector_in[0 +: DATA_WIDTH];
                assign valid_out[0]               = valid_in;
            end 
            else begin : lane_delayed
                // Create a shift register chain of depth 'r' for Row 'r'
                logic [DATA_WIDTH-1:0] delay_chain [r-1:0];
                logic [r-1:0]          valid_chain;
                always_ff @(posedge clock or posedge reset) begin
                    if (reset) begin
                        valid_chain <= '0;
                        for (int i = 0; i < r; i = i + 1) begin
                            delay_chain[i] <= '0;
                        end
                    end else begin
                        // First stage of the chain grabs data from the input vector
                        delay_chain[0] <= vector_in[r*DATA_WIDTH +: DATA_WIDTH];
                        valid_chain[0] <= valid_in;
                        // Subsequent stages shift data down the line
                        for (int i = 1; i < r; i = i + 1) begin
                            delay_chain[i] <= delay_chain[i-1];
                            valid_chain[i] <= valid_chain[i-1];
                        end
                    end
                end
                // Expose the final tap of the shift register chain to the output
                assign vector_out[r*DATA_WIDTH +: DATA_WIDTH] = delay_chain[r-1];
                assign valid_out[r]                           = valid_chain[r-1];
            end
            
        end
    endgenerate
endmodule