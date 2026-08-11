class txn_object #(
    parameter int BITS = 8
);

    rand logic [BITS-1:0] data;
    rand logic enable;
    rand logic reset;

    logic [BITS-1:0] data_out;

    function void print(string tag = "txn_object");
        $display("T=%0t [%s] DATA=0x%0h EN=%0d RESET=0x%0h",
              			$time, tag, data, enable, reset);
    endfunction
endclass 