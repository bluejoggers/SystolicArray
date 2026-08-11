class test;
    environment ENV;
    mailbox DRV_MBOX;

    function new();
        ENV = new();
        DRV_MBOX = new();
    endfunction

    virtual task run();
        ENV.DRV.driver_mbox = DRV_MBOX;

        fork 
            ENV.run();
        join_any

        apply_stim();
    endtask

    virtual task apply_stim();
        txn_object txn;
        $display("T=%0t [TEST] Starting stimulus application", $time);

        txn.reset  = 1'b1;
        txn.enable = 1'b0;
        txn.data   = '0;
        DRV_MBOX.put(txn);

        // Step 2: Operational testing with reset held low (reset = 0)
        repeat (10) begin 
            txn = new();
            assert(txn.randomize() with {
                reset == 1'b0; // Force reset inactive during normal operations
            
                // Optional: Weight enable so 80% of transactions write, 20% hold state
                enable dist { 1 := 80, 0 := 20 };
            }) else $fatal("Randomization failed!");

        DRV_MBOX.put(txn);
        end
    endtask 

endclass