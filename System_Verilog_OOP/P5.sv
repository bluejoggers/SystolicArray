// Polymorphism in SystemVerilog allows a single variable, function, object to change its behaviour based on the object handle. 
// A method can be declared as virtual and it will behave as required depending on the object handle provided.
// Virtual methods are used to achieve polymorphism in System Verilog.

// Illegal to assign a base class object to a derived class object handle. However, it is legal to assign a derived class object to a base class object handle.

class base;
    bit [7:0] address;
    bit [7:0] data;

    function new(bit [7:0] address = 0, bit [7:0] data = 0);
        this.address = address;
        this.data = data;
    endfunction

    virtual function void display(string tag = "Thread 1");
        $display("[BASE] [%s] address = 0x%0h, data = 0x%0h", tag, this.address, this.data);
        endfunction
endclass

class child extends base;
    rand bit en;

    function new(bit [7:0] address = 0, bit [7:0] data = 0, bit en = 0);
        super.new(address, data);
        this.en = en;
    endfunction

    function void display(string tag = "Thread 2");
        $display("[CHILD] [%s] address = 0x%0h, data = 0x%0h, en = %0b", tag, this.address, this.data, this.en);
    endfunction
endclass


module top;
    base bc, bc1;
    child sc;

    initial begin
        bc = new(8'h12, 8'h34);
        sc = new(8'h56, 8'h78, 1'b1);

        bc1 = sc; // Legal to assign a derived class object to a base class object handle.

        bc.display("Thread 1");
        sc.display("Thread 2");
        bc1.display("Thread 3");
    end 

endmodule 