# C++ Programming Assignment 3 Solutions

## Overview

This repository contains solutions to a series of programming assignments designed to strengthen fundamental programming skills. These exercises focus on basic logic, loops, arrays, and problem-solving concepts.

## Assignments

### 1. Steps to Zero
- **Description**: Write a program to count the number of steps required to make a number equal to zero. If the number is odd, decrease it by one. If the number is even, divide it by two.
- **Example**:
  - **Input**:
    ```
    15
    ```

  - **Output**: 
     ```
    7
    ```

### 2. Greatest Common Divisor (GCD)
- **Description**: Write a program to take two integers from the user and find the greatest common divisor of the two numbers.
- **Example**:
  - **Input**:
    ```
    25 15
    ```

  - **Output**:
    ```
    5
    ```

### 3. Right Triangle Number Pattern
- **Description**: Write a program to print a right triangle number pattern series using a loop.
- **Example**:
  - **Input**:
    ```
    5
    ```

  - **Output**:
    ```
    1
    22
    333
    4444
    55555
    ```

### 4. Hollow Right Triangle Star Pattern
- **Description**: Write a program to print a hollow right triangle star pattern series using a loop.
- **Example**:
  - **Input rows**:
    ```
    6
    ```

  - **Output**:
    ```
    *
    **
    * *
    *  *
    *   *
    ******
    ```

### 5. Inverted Right Triangle Star Pattern
- **Description**: Write a program to print an inverted right triangle star pattern series using a loop.
- **Example**:
  - **Input rows**:
    ```
    6
    ```

  - **Output**:
    ```
    ******
    *****
    ****
    ***
    **
    *
    ```

### 6. List of Non-Prime Numbers
- **Description**: Write a program to take a number and find a list of non-prime numbers from 1 to that number.
- **Example**:
  - **Input**: 
    ```
    25
    ```

  - **Output**:
    ```
    4 6 8 9 10 12 14 15 16 18 20 21 22 24 25
    ```

### 7. Number to Words
- **Description**: Write a program in C++ to input any number and print it in words.
- **Example**:
  - **Input**: 
    ```
    8309
    ```
  - **Output**:
    ```
    Eight Three Zero Nine
    ```

### 8. Count Even and Odd Elements in Array
- **Description**: Write a program to input elements in an array from the user and count even and odd elements in the array.
- **Example**:
  - **Input array**:
    ```
    1 2 3 4 5 6 7 8 9
    ```

  - **Output**:
    ```
    Total even elements: 4
    Total odd elements: 5
    ```

### 9. Search Element in Array
- **Description**: Write a program to input elements in an array and search whether an element exists in the array or not.
- **Example**:
  - **Input elements in array**:
    ```
    10, 12, 20, 25, 13, 10, 9, 40, 60, 5
    ```

  - **Element**:
    ``` 
    25
    ```

  - **Output**:
    ```
    Element found at index 3
    ```

### 10. Count Occurrences of a Number in Array
- **Description**: Write a C++ program to count the number of occurrences of a given number in an array of integers.
- **Example**:
  - **Input**: 
    ```
    7
    ```

  - **Array**: 
    ```
    5, 7, 8, 8, 5, 8, 7, 7
    ```

  - **Output**: 
    ```
    Number of occurrences of 7 : 3
    ```

### 11. Find Second Maximum
- **Description**: Write a program to take 10 numbers from the user and find the second maximum.
- **Example**:
  - **Input**: 
    ```
    5 8 3 11 6 4 2 7 1 9
    ```

  - **Output**: 
    ```
    9
    ```

### 12. Copy Array Elements
- **Description**: Write a program to input elements in an array and copy all elements of the first array into the second array.
- **Example**:
  - **Input array1 elements**:
    ```
    10 1 95 30 45 12 60 89 40 -4
    ```

  - **Output**:
    ```
    Array1 : 10 1 95 30 45 12 60 89 40 -4
    Array2 : 10 1 95 30 45 12 60 89 40 -4
    ```

### 13. Odd or Even Sum
- **Description**: Given a list of integers, determine whether the sum of its elements is odd or even. If the input array is empty, consider it as `[0]`.
- **Example**:
  - **Input**:
    ```
    [0, 1, 4]
    ```

  - **Output**:
    ```
    odd
    ```

### 14. Additive Inverse
- **Description**: Given an array of integers, return the additive inverse of each. Each positive becomes negative, and the negative becomes positive.
- **Example**:
  - **Input**:
    ```
    [1, -2, 3, -4, 5]
    ```

  - **Output**:
    ```
    [-1, 2, -3, 4, -5]
    ```

### 15. Double Array Values
- **Description**: Given an array of integers, return a new array with each value doubled.
- **Example**:
  - **Input**:
    ```
    [1, 2, 3]
    ```

  - **Output**: 
    ```
    [2, 4, 6]
    ```

### 16. Find Unique Integer
- **Description**: Given an array of integers where each element has both a negative and a positive value except for one integer, find that integer.
- **Example**:
  - **Input**:
    ```
    [1, -1, 2, -2, 3]   
    ```

  - **Output**: 
    ```
    3
    ```

### 17. Find Unique Elements in Array
- **Description**: Write a program to input elements in an array and print all unique elements.
- **Example**:
  - **Input array elements**:
    ```
    1, 2, 3, 5, 1, 5, 20, 2, 12, 10
    ```

  - **Output**:
    ```
    All unique elements in the array are: 3, 20, 12, 10
    ```

### 18. Find Pairs with Sum Equal to Last Element
- **Description**: Write a program to input elements in an array and find two numbers whose sum equals the last element in the array.
- **Example**:
  - **Input**: 
    ```
    1, 5, 7, 5, 8, 9, 11, 12
    ```

  - **Output**:
    ```
    Array pairs whose sum equal to 12:
    1, 11
    5, 7
    7, 5
    ```

### 19. Delete Element from Array
- **Description**: Write a C++ program to delete an element from an array at a specified position.
- **Example**:
  - **Input array elements**:
    ```
    10 20 30 40 50
    ```

  - **Input position to delete**:
    ```
    2
    ```

  - **Output**:
    ```
    Array elements: 10, 30, 40, 50
    ```

---

## Bonus Problems

### 1. Equilateral Triangle Star Pattern
- **Description**: Write a program to print an equilateral triangle or pyramid star pattern series of n rows using a loop.
- **Example**:
  - **Input rows**:
    ```
    5
    ```

  - **Output**:
    ```
        *
       ***
      *****
     *******
    *********
    ```

### 2. Rhombus Star Pattern
- **Description**: Write a program to print a rhombus star pattern of N rows using a loop.
- **Example**:
  - **Enter number of rows**: 
    ```
    6
    ```

  - **Output**:
    ```
        ******
       ******
      ******
     ******
    ******
    ******
    ```

### 3. Codeforces Problem W
- **Link**: [Codeforces Problem W](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W)

### 4. Codeforces Problem U
- **Link**: [Codeforces Problem U](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U)

---

## How to Run the Programs
1. Choose a programming language and implement the solutions.
2. Use a compiler or IDE to run the programs.
3. Follow the instructions for user input and verify the outputs.

## How to Contribute
1. Fork the repository.
2. Create a new branch for your changes.
3. Implement your solution to one of the assignments or bonus problems.
4. Submit a pull request with a clear description of your changes.

## Testing
To test the programs, follow these steps:
1. Compile the program using a C++ compiler (e.g., `g++`).
2. Run the executable and provide the required input.
3. Verify that the output matches the expected results provided in the examples.

## License
This project is licensed under the MIT License.

--- 