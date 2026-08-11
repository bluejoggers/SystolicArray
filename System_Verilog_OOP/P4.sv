// Inheritance
// super and extends keywords

class packet; //Parent class 
    
    int address;

    function new(int address = 0);
        this.address = address;
    endfunction

    function void display();
        $display("[BASE] Packet address: %0d", this.address);
    endfunction
endclass 


class sub_packet extends packet; //Child class 

    int data;

    function new(int address, int data);
        super.new(address); // Call the parent class constructor
        this.data = data;
    endfunction

    function void display();
        $display("[CHILD] Packet address: %0d, data: %0d", this.address, this.data);
    endfunction
endclass

module top;
    packet bc;
    sub_packet sc;

    initial begin 
        bc = new(32'hface_cafe);
        bc.display();

        sc = new(32'hfeed_feed, 32'h1234_5678);
        sc.display();
    end
endmodule 


    
