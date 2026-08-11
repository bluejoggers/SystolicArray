class test;
    environment ENV;

    function new();
        ENV = new();
    endfunction

    task run();
        ENV.run();
    endtask
endclass