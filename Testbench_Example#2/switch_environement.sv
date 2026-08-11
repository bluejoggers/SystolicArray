class environment #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
);
    driver #(ADDR_WIDTH, DATA_WIDTH) DRV;
    generator #(ADDR_WIDTH, DATA_WIDTH) GEN;
    monitor #(ADDR_WIDTH, DATA_WIDTH) MON;
    scoreboard #(ADDR_WIDTH, DATA_WIDTH) SCB;

    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) GEN_DRV_MBX;
    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) MON_SCB_MBX;

    event drv_done;

    virtual switch_if vif;

    function new();
        DRV = new();
        GEN = new();
        MON = new();
        SCB = new();

        GEN_DRV_MBX = new();
        MON_SCB_MBX = new();

        DRV.driver_mbox = GEN_DRV_MBX;
        GEN.generator_mbox = GEN_DRV_MBX;

        MON.monitor_mbox = MON_SCB_MBX;
        SCB.scoreboard_mbox = MON_SCB_MBX;
    endfunction

    virtual task run();
        DRV.virtual_if = vif;
        MON.virtual_if = vif;

        fork
            DRV.run();
            GEN.run();
            MON.run();
            SCB.run();
        join_none
    endtask
endclass