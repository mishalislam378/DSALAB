# README - Doubly Linked List Implementation in C++

## Overview
This program implements a **generic doubly linked list** in C++ using **templates**. It provides various operations such as:
- **Insertion** (`push_back`, `push_front`)
- **Deletion** (`pop_back`, `pop_front`)
- **Checking if the list is empty** (`empty`)

The main function demonstrates:
1. **Using the doubly linked list with an array of `long long` integers**.
2. **Performing insertion operations (front and back)**.
3. **Retrieving and displaying elements from the list**.

## Features & Functions
### Class: `double_linked<T>`
- **Constructor & Destructor:**
  - Initializes an empty list.
  - Properly deallocates memory when the object is destroyed.
- **bool empty() const**
  - Returns `true` if the list is empty.
- **void push_back(T data)**
  - Inserts an element at the end of the list.
- **void push_front(T data)**
  - Inserts an element at the beginning of the list.
- **T pop_back()**
  - Removes and returns the last element of the list.
- **T pop_front()**
  - Removes and returns the first element of the list.
- **Template Constructor for Array Initialization:**
  - Allows initializing a list directly from an array.

## How It Works
### Example Execution:
#### **Doubly Linked List Operations:**
```cpp
long long arr[] = { 1000000000001, 2000000000002, 3000000000003, 4000000000004 };
double_linked<long long> dlist(arr);

dlist.push_back(5000000000005);
dlist.push_front(9999999999999);

// Print list after insertions
cout << "List after insertions: ";
while (dlist)
    cout << dlist.pop_front() << " ";

cout << endl;
```

#### **Expected Output:**
```
List after insertions: 9999999999999 1000000000001 2000000000002 3000000000003 4000000000004 5000000000005
```

## Compilation & Execution
### Steps to Compile:
1. Save the file as `doubly_linked_list.cpp`.
2. Open the terminal (Linux/Mac) or command prompt (Windows).
3. Run the following command to compile:
   ```bash
   g++ -o doubly_linked_list doubly_linked_list.cpp
   ```
4. Run the executable:
   ```bash
   ./doubly_linked_list   # On Linux/Mac
   doubly_linked_list.exe # On Windows
   ```

## Notes
- The program uses **template classes**, allowing it to store different data types.
- **Proper memory management** is ensured using dynamic memory allocation and a destructor.
- The linked list follows a **doubly linked structure**, where each node points to both the next and previous nodes.
- **Error handling** is included for invalid operations (e.g., popping from an empty list).

## Author
- Created by a **Computer Science student** exploring **C++ data structures**.

Happy Coding! 🚀

