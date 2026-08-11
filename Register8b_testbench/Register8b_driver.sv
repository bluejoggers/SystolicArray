// The driver is responsible for driving transactions to the DUT
// All it does is to get a transaction from the mailbox if it is
// available and drive it out into the DUT interface.

class driver #(
    parameter int BITS = 8
);
    virtual reg_if virtual_if;
    event driver_done;

    mailbox #(txn_object #(BITS)) driver_mbox;

    task run();
        $display("T=%0t [DRIVER] Waiting for transaction from mailbox", $time);

        @(posedge virtual_if.clk);
        forever begin
            txn_object txn;

            $display("T=%0t [DRIVER] Waiting for transaction from mailbox", $time);
            driver_mbox.get(txn); // Get transaction from mailbox
            txn.print("DRIVER"); // Print transaction details

            virtual_if.reset <= txn.reset;
            virtual_if.enable <= txn.enable;
            virtual_if.data_in <= txn.data;

            @(posedge virtual_if.clk);
            ->driver_done; // Notify that the transaction has been driven
        end
    endtask
endclass 