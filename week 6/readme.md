# README - Linked List Implementation in C++

## Overview
This program implements a **generic singly linked list** in C++ using **templates**. It provides various operations such as:
- **Insertion** (`push`, `insertafter`)
- **Deletion** (`deleteItem`, `pop`)
- **Reversal of a string using stack behavior** (`reversestring`)
- **Checking if the list is empty** (`emptyList`)

The main function demonstrates:
1. **Reversing a user-input string** using stack behavior.
2. **Basic operations on an integer list**.

## Features & Functions
### Class: `list<ItemType>`
- **Constructor & Destructor:**
  - Initializes an empty list.
  - Properly deallocates memory when the object is destroyed.
- **bool emptyList()**
  - Returns `true` if the list is empty.
- **void push(ItemType newvalue)**
  - Inserts an element at the beginning (stack push operation).
- **ItemType pop()**
  - Removes and returns the first element (stack pop operation).
- **void deleteItem(ItemType oldvalue)**
  - Deletes the first occurrence of a given value from the list.
- **void insertafter(ItemType oldvalue, ItemType newvalue)**
  - Inserts `newvalue` after `oldvalue` if it exists in the list.
- **void reversestring(string &s)**
  - Uses a stack (implemented with linked list) to reverse a given string.

## How It Works
### Example Execution:
#### **String Reversal Demo:**
**Input:**
```
Please enter a string: hello
```
**Processing:**
- Each character is pushed onto the list (acting as a stack).
- The characters are popped in LIFO order, forming the reversed string.

**Output:**
```
String reversed: olleh
```

#### **Integer List Operations:**
```cpp
list<int> l;
l.push(86);         // Inserts 86
cout << l.pop();    // Outputs 86 and removes it from list
l.deleteItem(86);   // Deletes 86 (if present)
l.emptyList();      // Checks if the list is empty
l.insertafter(86, 89); // Inserts 89 after 86 (if present)
```

## Compilation & Execution
### Steps to Compile:
1. Save the file as `linked_list.cpp`.
2. Open the terminal (Linux/Mac) or command prompt (Windows).
3. Run the following command to compile:
   ```bash
   g++ -o linked_list linked_list.cpp
   ```
4. Run the executable:
   ```bash
   ./linked_list   # On Linux/Mac
   linked_list.exe # On Windows
   ```

## Notes
- The program uses **template classes**, allowing it to store different data types.
- **Proper memory management** is ensured using dynamic memory allocation and destructor.
- The linked list follows a **singly linked list structure**, where each node points to the next.
- **Error handling** is included for invalid operations (e.g., popping from an empty list).

## Author
- Created by a **Computer Science student** focusing on **C++ linked lists & stack operations**.

Happy Coding! 🚀

