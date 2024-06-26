# Logic Gates | NOT Gate | OR Gate | NOR Gate

---

A ***logic gate*** is a fundamental building block of digital electronic circuits. It's a physical device or a circuit element that performs a Boolean function based on one or more binary inputs and produces a single binary output. The binary values typically represent 0 (false or low voltage) and 1 (true or high voltage).

There are several types of logic gates, each performing a specific logical operation:

1. **AND Gate**: The output of an AND gate is true (1) only when all of its inputs are true (1).
2. **OR Gate**: The output of an OR gate is true (1) if at least one of its inputs is true (1).
3. **NOT Gate (Inverter)**: The output of a NOT gate is the logical complement of its input. If the input is true (1), the output is false (0), and vice versa.
4. **NAND Gate**: The output of a NAND gate is the negation of the AND operation. It is false (0) only when all inputs are true (1).
5. **NOR Gate**: The output of a NOR gate is the negation of the OR operation. It is true (1) only when all inputs are false (0).
6. **XOR Gate (Exclusive OR)**: The output of an XOR gate is true (1) if the number of true inputs is odd.
7. **XNOR Gate (Exclusive NOR)**: The output of an XNOR gate is true (1) if the number of true inputs is even.

Logic gates are typically implemented using electronic components such as transistors, diodes, or integrated circuits (ICs). They are the building blocks of digital systems, including computers, microcontrollers, and programmable logic controllers (PLCs). By combining logic gates in various configurations, complex logical operations and circuits can be created to perform arithmetic, data processing, and control functions.

---

1. Launch the OpenPLC Editor application.
2. Create a new project and designate its title as `Logic_Gates`
3. Within the project, define a program with the same name and select the LD (Ladder Diagram) option.
    
    ![Untitled](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/06c968b1-34d1-4079-92e1-972c30d74c41)

4. Establish variables within the variable window named as `Input_0, Input_1, Input_2, Input_3, Input_4, Output_0, Output_1 and Output_2` specifying their data type as boolean.
    
    ![Untitled 1](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/72c8913f-21c7-4b5b-bec7-dc0ca7fda4b3)

5. Now start adding contact and coils and assigning variales to them and connect them as shown in the image below
    
    ![Untitled 2](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/140e7edf-12b9-42ac-b6ea-d1ec14452de9)

6. Once done run the simulation and go in the debugger window and force turn on the Not Gate and check for changes
    
    ![Untitled 3](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/12db76ce-ec7d-405f-86bd-a0b3349746bc)
    
7. Similarly do a force true and false on the NOT and OR Gate
    
    ![Untitled 4](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/f263a7ac-433f-4cf3-a6bc-ba575215cfb8)
    
    ![Untitled 5](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/ad2b2334-5c8d-470d-8f48-dfc1a5751435)
