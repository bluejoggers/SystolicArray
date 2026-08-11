/*
Randomization: To enable randomization on a variable, you have to declare variables as either rand or randc. 
The difference between the two is that randc is cyclic in nature, and hence after randomization, 
the same value will be picked again only after all other values have been applied. 
If randomization succeeds, randomize() will return 1, else 0.
*/

class mypacket;
    rand bit [1:0] mode;
    randc bit [2:0] key;

    constraint mode_c { mode<3;}
    constraint key_c { key>2;
                        key<7;}

    function void display();
    $display("MODE: 0x%0h, KEY: 0x%0h", this.mode, this.key);
    endfunction
endclass

module testbench;
    mypacket pkt;

    initial begin 
        pkt = new();

        for (int i=0; i<20; i++) begin
            assert(pkt.randomize()==1) else $fatal("Randomization failed");
            pkt.display();
        end
    end 
endmodule