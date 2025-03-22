# COS 102 Mid-Semester Assessment LAB Part 2

This repository contains the solutions for the two programming tasks assigned in the COS 102 Mid-Semester Assessment. The tasks are:  
1. **Right-Angled Triangle Checker**: A program to determine if a triangle is right-angled based on two input angles.  
2. **Palindrome Checker**: A program to check if a given number is a palindrome.  

The repository is organized into two folders:  
- `right_angled_triangles`  
- `palindrome`  

Each folder contains the source code (`index.c`) and instructions for compiling and running the program.

---

## Table of Contents
- [COS 102 Mid-Semester Assessment LAB Part 2](#cos-102-mid-semester-assessment-lab-part-2)
  - [Table of Contents](#table-of-contents)
  - [Right-Angled Triangle Checker](#right-angled-triangle-checker)
    - [Program Description](#program-description)
    - [How to Compile and Run](#how-to-compile-and-run)
    - [Input Requirements](#input-requirements)
    - [Expected Output](#expected-output)
  - [Palindrome Checker](#palindrome-checker)
    - [Program Description](#program-description-1)
    - [How to Compile and Run](#how-to-compile-and-run-1)
    - [Input Requirements](#input-requirements-1)
    - [Expected Output](#expected-output-1)
  - [Contributors](#contributors)

---

## Right-Angled Triangle Checker

### Program Description
This program takes two angles of a triangle as input from the user and determines whether the triangle is right-angled. A right-angled triangle is defined as a triangle in which one of the angles is exactly 90 degrees.

### How to Compile and Run
1. Navigate to the `right_angled_triangles` folder:
   ```bash
   cd right_angled_triangles
   ```
2. Compile the program using a C compiler (e.g., gcc):
   ```bash
   gcc index.c -o right_angled_triangle
   ```
3. Run the compiled program:
   ```bash
   ./right_angled_triangle
   ```

### Input Requirements
- The program prompts the user to enter two angles of a triangle.
- Each angle must be a positive integer greater than 0 and less than 180.
- The sum of the two angles must be less than 180.

### Expected Output
If the triangle is right-angled, the program will output:
```bash
That's a right angle triangle
```
If the triangle is not right-angled, the program will output:
```bash
Not a right angle triangle
```

---

## Palindrome Checker

### Program Description
This program takes a number as input from the user and checks whether it is a palindrome. A palindrome is a number that remains the same when its digits are reversed (e.g., 121).

### How to Compile and Run
1. Navigate to the `palindrome` folder:
   ```bash
   cd palindrome
   ```
2. Compile the program using a C compiler (e.g., gcc):
   ```bash
   gcc index.c -o palindrome
   ```
3. Run the compiled program:
   ```bash
   ./palindrome
   ```

### Input Requirements
- The program prompts the user to enter a number.
- The number must be a positive integer.

### Expected Output
If the number is a palindrome, the program will output:
```bash
<number> is a palindrome.
```
If the number is not a palindrome, the program will output:
```bash
<number> is not a palindrome.
```

---

## Contributors
This project was developed by Group 4 as part of the COS 102 Mid-Semester Assessment. The group members are:

- Victor Amos
- Ekerette Ekanem
- Victory Obiechefu
- Emmanuel Omabe
- Edeh Emmanuel
- Faith Ogechi Nyeche
- George Michael
- Onumajuru Ugochukwu
- Precious Okoro
- Sochima Ezeobi
- Awelewa Temitope
- Nestor Efoke
- Yahhurwa Yusuf
- Micheal Comfort Opeyemi