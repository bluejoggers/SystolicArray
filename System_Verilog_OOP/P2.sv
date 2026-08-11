/*
Using the Packet class from this article, write a small testbench that creates one object pkt with count = 5. 
Then create a second handle pkt_alias that points to the same object as pkt, and a third handle pkt_copy that points to a brand new,
independent object also constructed with count = 5. Change pkt.count to 99, then display count through all three handles to confirm 
which ones changed.
*/

class packet;
    int count;

    function new(int c = 0);
        count = c;
    endfunction

    function void display();
        $display("Packet count: %0d", count);
    endfunction

endclass

module testbench;
    packet pkt, pkt_alias, pkt_copy;

    initial begin
        pkt = new(5);
        pkt.display();

        pkt_alias = pkt;
        pkt_alias.display();
        
        pkt_copy = new(5);
        pkt_copy.display();

        pkt.count = 99;
        $display("After changing pkt.count to 99:");
        pkt.display();
        pkt_alias.display();
        pkt_copy.display();
    end

endmodule 