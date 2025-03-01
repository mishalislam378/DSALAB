# Queue and Deque Implementations in C++

## Overview
This project contains implementations of queue and deque data structures using both static arrays and dynamic memory allocation. The provided programs demonstrate basic queue and deque operations, including insertion and removal from both ends.

## Implemented Features
### Queue Implementations
1. **Simple Queue (Fixed Size)**
   - Uses a static array of size 100.
   - Implements standard queue operations: `Insert()`, `Remove()`, `IsEmpty()`, and `IsFull()`.
   - Demonstrated by inserting and printing numbers (Exercise 4.1).

2. **Template Queue**
   - Implements a queue using dynamic memory allocation.
   - Supports generic data types with `template<class ItemType>`.
   - Implements standard queue operations.

3. **Queue for Names**
   - Specialized version of the simple queue handling strings.
   - Demonstrated by inserting and removing names from the queue (Exercise 4.2).

### Deque Implementations
1. **Static Array Deque**
   - Uses a circular array implementation.
   - Supports `InsertFront()`, `InsertRear()`, `RemoveFront()`, and `RemoveRear()` operations.
   - Demonstrated in Exercise 4.3.

2. **Template Deque**
   - Implements a double-ended queue (deque) using dynamic memory allocation.
   - Supports generic data types using `template<typename T, int N>`.
   - Demonstrates various insertions and removals (Exercise 4.4).

## Compilation and Execution
To compile and run the programs:

```sh
 g++ filename.cpp -o output
 ./output
```

Replace `filename.cpp` with the appropriate source file name.

## Example Usage
### Queue Example
```cpp
Queue q;
for (int i = 0; i < 10; i++) {
    q.Insert(i);
}
int item;
for (int i = 0; i < 10; i++) {
    q.Remove(item);
    cout << item << " ";
}
```

### Deque Example
```cpp
Deque<int, 5> intDeque;
intDeque.InsertRear(10);
intDeque.InsertFront(20);
intDeque.InsertRear(30);
int item;
intDeque.RemoveFront(item);
cout << "Removed: " << item << endl;
```

## Notes
- The queue and deque implementations use circular arrays to optimize space.
- The template classes allow flexibility in handling different data types.
- Boundary conditions (empty/full states) are handled with appropriate messages.

## Author
[Your Name]

