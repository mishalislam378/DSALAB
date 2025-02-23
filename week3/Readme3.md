# Recursive Functions in C++

## Overview

This repository contains various examples of recursive functions implemented in C++. These examples demonstrate different types of recursion, including direct and indirect recursion, to solve mathematical and algorithmic problems.

## Examples Included

### 1. Factorial Calculation (Example 3.1)

- Computes the factorial of a given number using recursion.
- **Function:** `fact(int n)`
- **Base Case:** `fact(0) = 1`
- **Recursive Case:** `fact(n) = n * fact(n - 1)`

### 2. Reverse Input String (Example 3.2)

- Reads characters from input and prints them in reverse order using recursion.
- **Function:** `rev()`
- Uses `cin.get(ch)` to read characters recursively until a newline is encountered.

### 3. Computing Power (Example 3.3 & Exp 3.4)

- Computes `X^N` recursively.
- **Function:** `power(int X, int N)`
- **Base Case:** `power(X, 0) = 1`
- **Recursive Case:** `power(X, N) = X * power(X, N - 1)`

### 4. Ackermann Function (Exercise 3.2)

- Implements the Ackermann function, a recursive mathematical function.
- **Function:** `Ackerman(int m, int n)`
- **Base Cases:**
  - `A(0, n) = n + 1`
  - `A(m, 0) = A(m - 1, 1)`
- **Recursive Case:** `A(m, n) = A(m - 1, A(m, n - 1))`

### 5. Printing Numbers in Reverse (Exercise 3.3a)

- Prints numbers from `N` down to 0 using recursion.
- **Function:** `printnumbers(int N)`
- **Base Case:** Stops when `N < 0`.
- **Recursive Case:** Prints `N` and calls `printnumbers(N - 1)`.

### 6. Binomial Coefficient (Exercise 3.3b)

- Computes the binomial coefficient using recursion.
- **Function:** `binomialcoeff(int n, int k)`
- **Base Cases:**
  - `C(n, k) = 1` when `n == k` or `k == 0`
- **Recursive Case:** `C(n, k) = C(n-1, k-1) + C(n-1, k)`

### 7. Prime Number Check (Exercise 3.3c)

- Determines if a number is prime using recursion.
- **Function:** `checkprime(int n, int div)`
- **Base Cases:**
  - If `n < 2`, return false.
  - If `div == n - 1`, return true.
  - If `n % div == 0`, return false.
- **Recursive Case:** Calls `checkprime(n, div + 1)`.

## How to Run the Code

1. Compile the desired C++ file using a compiler like g++:
   ```sh
   g++ filename.cpp -o output
   ```
2. Run the executable:
   ```sh
   ./output
   ```

## Requirements

- C++ compiler (g++, MSVC, Clang, etc.)
- Standard C++ libraries (iostream, conio.h, iomanip)



