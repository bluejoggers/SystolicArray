class monitor #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
);
    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) monitor_mbox;
    virtual switch_if #(ADDR_WIDTH, DATA_WIDTH) virtual_if;

    txn_object #(ADDR_WIDTH, DATA_WIDTH) pipeline_queue[$];

    task run();
        $display("T=%0t [MONITOR] Running...", $time);
        sample_port();
    endtask

    task sample_port();
        forever begin
            @(posedge virtual_if.clock);

            if(pipeline_queue.size() > 0) begin
                txn_object #(ADDR_WIDTH, DATA_WIDTH) txn_out;
                txn_out = pipeline_queue.pop_front();

                txn_out.address_a = virtual_if.address_a;
                txn_out.data_a = virtual_if.data_a;
                txn_out.address_b = virtual_if.address_b;
                txn_out.data_b = virtual_if.data_b;

                monitor_mbox.put(txn_out);
                txn_out.print("MONTIOR");
            end

            if(!virtual_if.reset && virtual_if.valid) begin 
                txn_object #(ADDR_WIDTH, DATA_WIDTH) txn_in = new();

                txn_in.address = virtual_if.address;
                txn_in.data = virtual_if.data;

                pipeline_queue.push_back(txn_in);
            end
        end
    endtask
endclass