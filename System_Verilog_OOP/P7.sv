// Polymorphism Example #2: Arrays of base handles(the power of uniformity)

class component;
    virtual task run();
        $display("Running generic component...");
    endtask
endclass

class driver extends component;
    task run();
        $display("Driver: Wiggling physical pins...");
    endtask
endclass

class monitor extends component;
    task run();
        $display("Monitor: Sampling bus traffic...");
    endtask
endclass

module testbench;
    component env[2];
    driver drv;
    monitor mon;

    initial begin
        drv = new();
        mon = new();

        env[0] = drv;
        env[1] = mon;

        foreach(env[i]) begin
            env[i].run();
        end
    end
endmodule 