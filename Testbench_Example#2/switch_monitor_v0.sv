class monitor #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
);
    virtual switch_if virtual_if;
    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) monitor_mbox;
    semaphore sema4;

    function new();
        sema4 = new();
    endfunction

    task run();
        $display("T=%0t [MONITOR] Starting...", $time);

        fork 
            sample_port(Thread0);
            sample_port(Thread1);
        join
    endtask

    task sample_port(string tag = "")
        forever begin 
            @(posedge virtual_if.clock)

            if(virtual_if.reset & virtual_if.valid) begin
                txn_object txn = new();
                sema4.get();
                
                txn.address = virtual_if.address;
                txn.data = virtual_if.data;

                $display("T=%0t [MONITOR] %s: First part finished." $time, tag);

                @(posedge virtual_if.clock)
                sema4.put();

                txn.address_a = virtual_if.address_a;
                txn.address_b = virtual_if.address_b;
                txn.data_a = virtual_if.data_a;
                txn.data_b = virtual_if.data_b;

                $display("T=%0t [MONITOR] %s: Second part finished." $time, tag);

                monitor_mbox.put(txn);
                txn.print({"Monitor_",tag});
            end
        end
    endtask 
endclass