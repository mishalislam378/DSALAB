# Priority Queue Implementation

This repository contains the implementation of a **Priority Queue** using **Object Composition** in C++. The implementation follows the requirements outlined in **Exercises 5.1 and 5.2** .

## 📌 Exercise 5.1
**Goal:** Implement a **fixed-size priority queue** with 10 priority levels.

### 🔹 Features
- Uses an **array of queues** to handle priority levels.
- Provides methods to:
  - Insert an item at a specific priority level.
  - Remove the highest priority item.
  - Check if the queue is empty or full.

### 🚀 Usage
```cpp
Deque<int> pq;
pq.Insert(50, 4);
pq.Insert(30, 3);
pq.Insert(20, 2);
pq.Insert(10, 1);

int removedItem;
for (int i = 0; i < 5; i++) {
    pq.remova(removedItem);
    if (removedItem != -1) {
        cout << "Removed: " << removedItem << endl;
    }
}
```

---

## 📌 Exercise 5.2
**Goal:** Modify the above class to support **'N' different priority levels** dynamically.

### 🔹 Enhancements
- Uses **templates** to allow flexibility in the number of priority levels (`N`).
- Dynamically allocates an array of queues (`PQ`).
- Follows **object composition** (Priority Queue **HAS-A** Queue).

### 🚀 Usage
```cpp
Deque<int, 5> pq;
pq.Insert(50, 4);
pq.Insert(30, 3);
pq.Insert(20, 2);
pq.Insert(10, 1);

int removedItem;
for (int i = 0; i < 5; i++) {
    pq.remova(removedItem);
    if (removedItem != -1) {
        cout << "Removed: " << removedItem << endl;
    }
}
```

---

## 🛠️ Compilation & Execution
To compile the program using **g++**:
```sh
g++ priority_queue.cpp -o priority_queue
```
To run:
```sh
./priority_queue
```

## 📚 Explanation
- `QUeue<T, N>`: Implements a **circular queue**.
- `Deque<T, N>`: Manages an array of queues based on priority.
- **Lowest index has highest priority**.
- Items are inserted into a specific priority queue.
- Items are removed from the highest available priority.

---

## ✅ Conclusion
This implementation provides a **flexible priority queue** using **object composition and templates**, supporting both **fixed** and **dynamic** priority levels.


