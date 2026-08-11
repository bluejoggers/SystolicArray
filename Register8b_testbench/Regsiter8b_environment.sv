// The environment is a container object simply to hold all verification
// components together. This environment can then be reused later and all
// components in it would be automatically connected and available for use
// This is an environment without a generator.

class environment #(parameter int BITS = 8);
    driver DRV;
    monitor MONITOR_in;
    monitor MONITOR_out;
    scoreboard #(BITS) SCB;
    mailbox SCB_MON_MBX;

    virtual reg_if #(BITS) virtual_if;

    function new();
        SCB_MON_MBX = new();
        DRV = new();
        MONITOR_in = new();
        MONITOR_out = new();
        SCB = new();
    endfunction 

    virtual task run();
        DRV.virtual_if = virtual_if;
        MONITOR_in.virtual_if = virtual_if;
        MONITOR_out.virtual_if = virtual_if;
        SCB.in_mon2scb = MONITOR_in.monitor_mbox;
        SCB.out_mon2scb = MONITOR_out.monitor_mbox;

        fork 
            DRV.run();
            MONITOR_in.run();
            MONITOR_out.run();
            SCB.run();
        join_any
    endtask

endclass