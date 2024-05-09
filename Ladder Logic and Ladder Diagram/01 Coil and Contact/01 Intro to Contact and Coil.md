# Intro to Contact and Coil

# Tutorial Contact (Inputs) and Coil (Outputs)

## What is a Coil and Contact?

In PLC (Programmable Logic Controller) programming, a coil and a contact are fundamental elements used to control the behavior of the program.

1. **Coil**: In PLC programming, a coil typically represents an output device such as a motor, valve, or indicator light. When a coil is energized (activated), it typically causes some action to occur in the physical system connected to the PLC. Coils are often associated with instructions that set or reset them based on certain conditions in the program logic.
2. **Contact**: A contact, also known as an input contact or input bit, represents the status of an input device connected to the PLC. Input devices could include sensors, switches, or other devices that provide feedback about the state of the physical system. Contacts are used in program logic to make decisions based on the current status of these input devices. They can be normally open (NO), normally closed (NC), or other types depending on the configuration of the input device.

In ladder logic, a common programming language for PLCs, coils and contacts are represented graphically using symbols resembling electrical circuit diagrams. Coils are usually depicted as a rectangle with diagonal lines inside, representing the energized state, while contacts are represented by symbols indicating the type of contact (NO, NC, etc.) along with the address of the input they represent. These elements, along with other logic functions, are combined to create the control logic necessary to automate industrial processes.

1. Double-click on the `OpenPLC Editor`.
    
    ![Untitled](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/6385d697-8782-4a0f-b17d-156100330e45)
    
    OpenPLC Editor Window
    
2. Once it's launched, click on a new file or press `Ctrl + N` to start a new project.

<aside>
💡 Remember, in OpenPLC, projects are saved in folders, not as files.

</aside>

1. Create a new folder named `Coil and Contact`.
2. Create a new file within this folder, name it `Coil_and_Contact`, set the POU type as `program`, and the language as `LD` (Ladder Diagram).
    
    ![Untitled 1](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/d019f045-8a15-4739-bac4-764056950d4d)

3. Declare a variable named `Toggle_Switch` and set its datatype as `Boolean`. To declare a variable click on the `+` sign in the variable window.
    
    ![Untitled 2](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/ecfd20f6-344f-45b2-bca0-c835aa64c37c)

4. Declare another variable named `Coil_1` and set its datatype as `Boolean`.
    
   ![Untitled 3](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/34206209-d29c-4cd8-b236-5fcdd52d4d81)
 
5. Add two power rails with `1 Pin` each, one for the left and one for the right. To add Power Pins navigate to the `Canvas` and do a right click and then add `Power Rail` . 
    
    ![Untitled 4](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/360a3edd-61be-47c4-932d-122032c900b8)

    > Also make a right and left power rail with as many pins you want just to explore out
    > 
    > 
    > ![Untitled 5](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/3ec91e45-652f-40e0-a38e-fde90ae7a976)
    > 
6. Right-click on the canvas and add a `Contact` and a `Coil`. Assign the variables `Toggle Switch` and `Coil` to these elements, respectively. 
    
    > Remember to adjust your blocks for aesthetics
    > 
    
    ![Untitled 6](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/b438241f-1f28-457b-8ef2-feb33e1a6542)
    
    ![Untitled 7](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/e5a9bed8-19a9-4324-b148-52b9b8fb9191)

7. Connect the power rails, contact, and coil as shown below.
    
    ![Untitled 8](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/07efbcda-1e6a-47ba-a7a1-f21334bc76c0)

8. Click on the 'Run Simulation' button and let the simulation converge.
    
   ![Untitled 9](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/b7655f63-c848-4b61-b55c-626ef11f46cb)
    
9. Click on the `Debug Instance` to open the debugger on the right side of the window.
    
    ![Untitled 10](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/bc3215d1-c7f2-4a92-9c0a-d9ea016fda39)
    
10. Click on the `glasses icon` to display the graph for the `coil and contact`.
    
    ![Untitled 11](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/d501a661-5129-4fd3-924e-480031745e55)
    
11. Now right click on the `Toggle_Switch` and change it to `force true`
    
    ![Untitled 12](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/1d7a44e0-bb18-4a76-952b-d558b1d1448c)
    
    ![Untitled 13](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/7db42ef8-2c08-4a8d-84b4-b4ffe33536b0)
    

# Tutorial Contact (Inputs) and Dual Coil (Outputs)

1. Before you add one more coil stop the simulation.
2. Add one more `coil` and name it as `Coil_2`
3. Arrange them as shown in the image below
    
    ![Untitled 14](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/21aba1e4-9e28-497f-914b-53a721e5d18d)
    
4. Run the simulation
5. Click on the `debugger` and check for the instances where the `toggle switch`  is being forced as true or false
6.  You will notice now `Toggle_Switch` will activate the `dual coils`
    
    ![Untitled 15](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/b84412f1-2893-4c86-aa9f-67b093416144)

    
7. Similarly add some more coils and repeat the experiment.
    
    ![Untitled 16](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/6c75c3b1-c02a-4f9d-9dec-84cae737877e)
