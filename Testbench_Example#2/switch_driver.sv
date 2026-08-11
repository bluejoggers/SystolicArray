class driver #(
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 16
);
    virtual switch_if virtual_if;
    event driver_done;

    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) driver_mbox;

    task run();
        $display("T=%0t [DRIVER] Running...", $time);
        
        @(posedge virtual_if.clock);
        forever begin
            txn_object txn;
            $display("T=%0t [DRIVER] Waiting for transaction from mailbox...", $time);

            driver_mbox.get(txn); // Get transaction from mailbox
            txn.print("DRIVER"); // Print transaction details

            virtual_if.valid <= txn.valid;

            virtual_if.address <= txn.address;
            virtual_if.data <= txn.data;

            @(posedge virtual_if.clock);
            ->driver_done; // Notify that the transaction has been driven
        end
    endtask
endclass