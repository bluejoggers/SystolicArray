class txn_object #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
);
    rand bit valid;

    rand logic [ADDR_WIDTH-1:0] address;
    rand logic [DATA_WIDTH-1:0] data;

    logic [DATA_WIDTH-1:0] data_a;
    logic [DATA_WIDTH-1:0] data_b;
    logic [ADDR_WIDTH-1:0] address_a;
    logic [ADDR_WIDTH-1:0] address_b;

    function void print(string tag = "txn_object");
        $display("T=%0t [%s] ADDR=0x%0h DATA=0x%0h ADDR_A=0x%0h DATA_A=0x%0h ADDR_B=0x%0h DATA_B=0x%0h",
              			$time, tag, address, data, address_a, data_a, address_b, data_b);
    endfunction
endclass