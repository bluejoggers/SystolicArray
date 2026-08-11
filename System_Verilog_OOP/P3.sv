class Component;
  virtual task run();
    $display("Running generic component");
  endtask
endclass

class Driver extends Component;
  task run();
    $display("Driver: Wiggling physical pins...");
  endtask
endclass

class Monitor extends Component;
  task run();
    $display("Monitor: Sampling bus traffic...");
  endtask
endclass

module testbench;
  // Create an array of generic PARENT handles
  Component env[2]; 
  Driver driver;
  Monitor monitor;

  Component temp;

  initial begin
    // Populate the array with entirely DIFFERENT child objects

    driver = new();
    monitor = new();

    env[0] = driver;
    env[1] = monitor;

    // A single loop executes wildly different behaviors
    temp = env[0];
    temp.run();

    temp = env[1];
    temp.run();
  end
endmodule