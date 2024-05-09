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
    
    ![Untitled](Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled.png)
    
4. Establish variables within the variable window named as `NO_Contact, NC_Contact, Coil_1, and Coil_2,` specifying their data type as boolean.
    
    ![Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%201.png](Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%201.png)
    
5. Integrate Power Rails, allocating one for the left and another for the right side, each equipped with two pins.
    
    ![Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%202.png](Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%202.png)
    
6. Begin by incorporating a `NO_Contact` as a standard input.
    
    ![Untitled](Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%203.png)
    
7. Similarly, include an `NC_Contact` input.
    
    ![Untitled](Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%204.png)
    
8. Insert the coils as depicted below and establish connections between the coils and contacts.
    
    ![Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%205.png](Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%205.png)
    
9. Execute the simulation and navigate to the debugger window. Set both contacts to `force true.`
    
    ![Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%206.png](Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%206.png)
    
10. Similarly, set both contacts to `force false.`
    
    ![Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%207.png](Normally%20Open%20(NO)%20and%20Normally%20Close%20(NC)%20Contact%202ee77cdfb34845fbb363f1c3916fffd6/Untitled%207.png)