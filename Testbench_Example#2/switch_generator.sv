// The generator class is used to generate a random
// number of transactions with random addresses and data
// that can be driven to the design

class geenrator #(
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 16
);
    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) generator_mbox;
    event generator_done;

    int num_txns = 50;

    task run();
        $display("T=%0t [GENERATOR] Running...", $time);
        for (int i=0; i<num_txns;i++) begin 
            txn_object txn = new();
            assert(txn.randomize()==1) else $fatal("Randomization failed for transaction %0d", i);

            txn.print("GENERATOR"); // Print transaction details
            generator_mbox.put(txn);
            ->generator_done; // Notify that a transaction has been generated
        end

        $display("T=%0t [GENERATOR] Finished generating %0d transactions", $time, num_txns);
    endtask
endclass