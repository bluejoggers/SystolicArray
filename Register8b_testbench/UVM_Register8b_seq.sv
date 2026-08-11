class reg_seq extends uvm_sequence #(reg_txn);

    `uvm_object_utils(reg_seq)

    function new(string name = "reg_seq");
        super.new(name);
    endfunction

    task body();
        reg_txn txn;

        repeat (20) begin 
            txn = reg_txn::type_id::create("txn");
            start_item(txn);
            txn.randomize();
            finsih_item(txn);
        end
    endtask
endclass
