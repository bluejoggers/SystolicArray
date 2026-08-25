class scorebaord #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
);
    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) scoreboard_mbox;

    task run();
        forever begin 
            txn_object txn;
            scb_mbox.get(txn);

            if(txn.address inside {[0:'h3f]}) begin 
                if(txn.address_a != txn.address | txn.data_a != txn.data) begin 
                    $display("T=%0t [SCOREBOARD] ERROR! Address:0x%0h, Data:0x%0h | Address_A:0x%0h, Data_A:0x%0h", $time, txn.address, txn.data, txn.address_a, txn.data_a);
                end
                else begin
                    $display("T=%0t [SCOREBOARD] PASS! Address:0x%0h, Data:0x%0h | Address_A:0x%0h, Data_A:0x%0h", $time, txn.address, txn.data, txn.address_a, txn.data_a);
                end
                end
            else begin 
                if(txn.address_b != txn.address | txn.data_b != txn.data) begin 
                    $display("T=%0t [SCOREBOARD] ERROR! Address:0x%0h, Data:0x%0h | Address_B:0x%0h, Data_B:0x%0h", $time, txn.address, txn.data, txn.address_b, txn.data_b);
                end
                else begin
                    $display("T=%0t [SCOREBOARD] PASS! Address:0x%0h, Data:0x%0h | Address_A:0x%0h, Data_A:0x%0h", $time, txn.address, txn.data, txn.address_b, txn.data_b);
                end
                end
            end
    endtask
endclass