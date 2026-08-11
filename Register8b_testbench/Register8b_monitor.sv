// The monitor has a virtual interface handle with which it can monitor
// the events happening on the interface. It sees new transactions and then
// captures information into a packet and sends it to the scoreboard
// using another mailbox.

class monitor #(
    parameter int BITS = 8
);
    virtual reg_if virtual_if;
    mailbox #(txn_object #(BITS)) monitor_mbox;

    function new();
        monitor_mbox = new();
    endfunction


    task run();
        $display("T=%0t [MONITOR] Starting to monitor DUT interface", $time);

        // Check forever at every clock edge to see if there is a
        // valid transaction and if yes, capture info into a class
        // object and send it to the scoreboard when the transaction
        // is over.

        forever begin
            @(posedge virtual_if.clk);
            if (virtual_if.enable) begin
                txn_object txn = new();
                
                txn.data = virtual_if.data_in;
                txn.data_out = virtual_if.data_out;
                txn.enable = virtual_if.enable;
                txn.reset = virtual_if.reset;

                txn.print("MONITOR");
                monitor_mbox.put(txn);
            end
        end
    endtask
endclass