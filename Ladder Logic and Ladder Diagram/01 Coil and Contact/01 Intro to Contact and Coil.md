# Intro to Contact and Coil

# Tutorial Contact (Inputs) and Coil (Outputs)

## What is a Coil and Contact?

In PLC (Programmable Logic Controller) programming, a coil and a contact are fundamental elements used to control the behavior of the program.

1. **Coil**: In PLC programming, a coil typically represents an output device such as a motor, valve, or indicator light. When a coil is energized (activated), it typically causes some action to occur in the physical system connected to the PLC. Coils are often associated with instructions that set or reset them based on certain conditions in the program logic.
2. **Contact**: A contact, also known as an input contact or input bit, represents the status of an input device connected to the PLC. Input devices could include sensors, switches, or other devices that provide feedback about the state of the physical system. Contacts are used in program logic to make decisions based on the current status of these input devices. They can be normally open (NO), normally closed (NC), or other types depending on the configuration of the input device.

In ladder logic, a common programming language for PLCs, coils and contacts are represented graphically using symbols resembling electrical circuit diagrams. Coils are usually depicted as a rectangle with diagonal lines inside, representing the energized state, while contacts are represented by symbols indicating the type of contact (NO, NC, etc.) along with the address of the input they represent. These elements, along with other logic functions, are combined to create the control logic necessary to automate industrial processes.

1. Double-click on the `OpenPLC Editor`.
    
    ![OpenPLC Editor Window](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled.png)
    
    OpenPLC Editor Window
    
2. Once it's launched, click on a new file or press `Ctrl + N` to start a new project.

<aside>
💡 Remember, in OpenPLC, projects are saved in folders, not as files.

</aside>

1. Create a new folder named `Coil and Contact`.
2. Create a new file within this folder, name it `Coil_and_Contact`, set the POU type as `program`, and the language as `LD` (Ladder Diagram).
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%201.png)
    
3. Declare a variable named `Toggle_Switch` and set its datatype as `Boolean`. To declare a variable click on the `+` sign in the variable window.
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%202.png)
    
4. Declare another variable named `Coil_1` and set its datatype as `Boolean`.
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%203.png)
    
5. Add two power rails with `1 Pin` each, one for the left and one for the right. To add Power Pins navigate to the `Canvas` and do a right click and then add `Power Rail` . 
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%204.png)
    
    > Also make a right and left power rail with as many pins you want just to explore out
    > 
    > 
    > ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%205.png)
    > 
6. Right-click on the canvas and add a `Contact` and a `Coil`. Assign the variables `Toggle Switch` and `Coil` to these elements, respectively. 
    
    > Remember to adjust your blocks for aesthetics
    > 
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%206.png)
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%207.png)
    
7. Connect the power rails, contact, and coil as shown below.
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%208.png)
    
8. Click on the 'Run Simulation' button and let the simulation converge.
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%209.png)
    
9. Click on the `Debug Instance` to open the debugger on the right side of the window.
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%2010.png)
    
10. Click on the `glasses icon` to display the graph for the `coil and contact`.
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%2011.png)
    
11. Now right click on the `Toggle_Switch` and change it to `force true`
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%2012.png)
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%2013.png)
    

# Tutorial Contact (Inputs) and Dual Coil (Outputs)

1. Before you add one more coil stop the simulation.
2. Add one more `coil` and name it as `Coil_2`
3. Arrange them as shown in the image below
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%2014.png)
    
4. Run the simulation
5. Click on the `debugger` and check for the instances where the `toggle switch`  is being forced as true or false
6.  You will notice now `Toggle_Switch` will activate the `dual coils`
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%2015.png)
    
7. Similarly add some more coils and repeat the experiment.
    
    ![Untitled](Intro%20to%20Contact%20and%20Coil%206611dd23f2a54a69bfed700856293c2e/Untitled%2016.png)