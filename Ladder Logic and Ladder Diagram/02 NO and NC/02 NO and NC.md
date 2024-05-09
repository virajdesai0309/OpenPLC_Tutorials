# Normally Open (NO) and Normally Close (NC) Contacts

---

## What is a Negated Contact and a Negated Coil?

In PLC programming, a negated contact and a negated coil are elements used to represent the logical opposite of a regular contact or coil, respectively. They are commonly used in control logic to create conditional statements or to control the behavior of the program.

1. **Negated Contact**:
    - Also known as a "Normally Closed" (NC) contact, a negated contact represents a condition that is true when the associated input is not active.
    - In ladder logic diagrams, a negated contact is typically represented by a normally closed contact symbol with a small circle or bubble at the end, indicating the negation. This symbol signifies that the associated input must be inactive (or "off") for the contact to be true.
    - Negated contacts are useful for implementing conditions where an action should occur when an input is not active, or when a certain condition is not met.
2. **Negated Coil**:
    - A negated coil represents the logical opposite of a regular coil. It is energized when its associated condition is false.
    - In ladder logic diagrams, a negated coil is represented by a regular coil symbol with a small circle or bubble at the end, indicating the negation. This symbol signifies that the coil is energized when the associated condition is false.
    - Negated coils are commonly used to implement actions that should occur when a specific condition is not met or when certain criteria are not satisfied.

Negated contacts and coils are essential in PLC programming as they allow programmers to create complex control logic by representing both positive and negative conditions in the system. They provide flexibility in designing control systems to meet various requirements and specifications.

---

1. Launch the OpenPLC Editor application.
2. Create a new project and designate its title as `NO and NC.`
3. Within the project, define a program with the same name and select the LD (Ladder Diagram) option.
    
    ![Untitled](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/79e17470-e5bb-4b6e-9068-539c08a3247e)
    
4. Establish variables within the variable window named as `NO_Contact, NC_Contact, Coil_1, and Coil_2,` specifying their data type as boolean.
    
    ![Untitled 1](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/e999c0c7-d313-4312-825e-64aab64fd1a1)
    
5. Integrate Power Rails, allocating one for the left and another for the right side, each equipped with two pins.
    
    ![Untitled 2](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/55db3863-00fc-4da9-ba0e-e7aa362b9275)
    
6. Begin by incorporating a `NO_Contact` as a standard input.
    
    ![Untitled 3](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/bb02e2ab-da16-4693-98b6-7b5132522867)
    
7. Similarly, include an `NC_Contact` input.
    
    ![Untitled 4](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/24d8fd1b-50f8-4f72-b862-1d9e12eafb9a)
    
8. Insert the coils as depicted below and establish connections between the coils and contacts.
    
    ![Untitled 5](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/944bfcc2-0814-47b5-bef0-fab54caf06c4)
    
9. Execute the simulation and navigate to the debugger window. Set both contacts to `force true.`
    
    ![Untitled 6](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/56177a8c-4b4d-47d8-8544-a279c7eff595)
    
10. Similarly, set both contacts to `force false.`
    
    ![Untitled 7](https://github.com/virajdesai0309/OpenPLC_Tutorials/assets/87890409/12bd9688-654e-4692-ab64-a16f589526c5)
