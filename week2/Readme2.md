

# Stack Data Structure: Dynamic & Static Implementations and Their Applications

This repository provides a C++ implementation of the stack data structure, along with practical demonstrations of its various applications. The code includes several versions of the stack class that cater to different data types and memory management techniques. It also highlights how stacks are used to solve common algorithmic problems such as string reversal, parenthesis matching, infix to postfix conversion, and postfix expression evaluation.

## Contents

- [Overview](#overview)
- [Stack Implementations](#stack-implementations)
    - [Basic Stack (stack1.h/cpp)](#basic-stack)
    - [Stack with Peek Method (stack1.h/cpp)](#stack-with-peek-method)
    - [Character Stack (stack1.h/cpp)](#character-stack)
    - [Template-based Stack (stack1.h/cpp)](#template-based-stack)
    - [Character Stack with Error Handling (stack1.h/cpp)](#character-stack-with-error-handling)
- [Applications](#applications)
    - [Demonstration of Stack Operations (main.cpp)](#demonstration-of-stack-operations)
    - [String Reversal Using Stack (main.cpp)](#string-reversal-using-stack)
    - [Parenthesis Matching Algorithm (main.cpp)](#parenthesis-matching-algorithm)
    - [Infix to Postfix Conversion & Evaluation (main.cpp)](#infix-to-postfix-conversion-and-evaluation)
- [Compiling and Running the Code](#compiling-and-running-the-code)
- [Project Structure](#project-structure)
- [Code Explanation](#code-explanation)
- [Potential Enhancements](#potential-enhancements)

## Overview

A stack is a key data structure that follows the Last-In, First-Out (LIFO) order for operations. This repository contains an effective and concise C++ implementation of stacks in various forms, showcasing their versatility in solving practical problems. The examples included here emphasize the wide-ranging applications of stacks in computer science.

## Stack Implementations

The repository features different variants of stack implementation:

### Basic Stack (stack1.h/cpp)

A straightforward stack for integers, supporting fundamental operations like `Push` and `Pop`.

### Stack with Peek Method (stack1.h/cpp)

An extension of the basic stack that introduces the `Peek` function, which allows accessing the top element without removing it.

### Character Stack (stack1.h/cpp)

A stack designed specifically for storing characters. Ideal for handling string manipulation tasks.

### Template-based Stack (stack1.h/cpp)

A generic stack implementation using C++ templates, enabling the stack to handle any data type. It also demonstrates dynamic memory allocation techniques.

### Character Stack with Error Handling (stack1.h/cpp)

This version of the character stack adds robust error handling for overflow and underflow conditions, ensuring more reliable performance.

## Applications

Here are some of the practical applications demonstrating the utility of stacks:

### Demonstration of Stack Operations (main.cpp)

A simple program that showcases the basic stack operations: pushing, popping, and displaying the stack content.

### String Reversal Using Stack (main.cpp)

This program leverages a stack to reverse a given string.

### Parenthesis Matching Algorithm (main.cpp)

Uses a stack to verify if parentheses in a given expression are balanced.

### Infix to Postfix Conversion & Evaluation (main.cpp)

A program that converts an infix expression into postfix notation using a stack and evaluates the resulting postfix expression.

## Compiling and Running the Code

1. Ensure that you have a C++ compiler (like g++) installed.
2. Navigate to the folder containing the source files using your terminal.
3. Compile the code. For example, to compile the infix to postfix conversion example:
    ```bash
    g++ main.cpp stack1.cpp -o infix_postfix
    ```
    (Adjust the compilation command based on the specific program you wish to run.)
4. Execute the compiled program:
    ```bash
    ./infix_postfix
    ```

