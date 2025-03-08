
// // //EXERCISE 5.1 :

// // #include <iostream>
// // using namespace std;

// // template <class T>
// // class QUeue {
// // private:
// //     int front, rear, count, maxque;
// //     T* items;

// // public:
// //     QUeue() : front(0), rear(0), count(0), maxque(501) {
// //         items = new T[maxque];
// //     }

// //     QUeue(int max) {
// //         maxque = max + 1;
// //         front = 0;
// //         rear = 0;
// //         count = 0;
// //         items = new T[maxque];
// //     }

// //     ~QUeue() {
// //         delete[] items;
// //     }

// //     bool IsEmpty() {
        
// //         return count == 0;
// //     }

// //     bool IsFull() {
// //         return count == maxque ;
// //     }

// //     void insert(T newitem) {
// //         if (IsFull()) {
// //             cout << "Queue is full" << endl;
// //             return;
// //         }
// //         items[rear] = newitem;
// //         rear = (rear + 1) % maxque;  
// //         count++;
// //     }

// //     void removal(T& item) { 
// //         if (IsEmpty()) {
// //             cout << "Queue is empty" << endl;
// //             item = -1;
// //             return;
// //         }
// //         item = items[front];
// //         front = (front + 1) % maxque;
// //         count--;
// //     }
// // };

// // template <class T>
// // class Deque {
// // private:
// //     QUeue<T> PQ[10];  //each priority level has its own rear nd front (queue)

// // public:
// //     bool IsEmpty() {
// //         for (int i = 0; i < 10; i++) {
// //             if (!PQ[i].IsEmpty()) {
// //                 return false;
// //             }
// //         }
// //         return true;
// //     }

// //     bool IsFull() {
// //         for (int i = 0; i < 10; i++) {
// //             if (!PQ[i].IsFull()) {
// //                 return false;
// //             }
// //         }
// //         return true;
// //     }

// //     void Insert(T newitem, int p) {
// //         if (p < 0 || p >= 10) {
// //             cout << "Invalid priority" << endl;
// //             return;
// //         }
// //         if (PQ[p].IsFull()) {
// //             cout << "Queue is full" << endl;
// //             return;
// //         }
// //         PQ[p].insert(newitem);
// //     }

// //     void remova(T& item) {
// //         for (int i = 0; i < 10; i++) {
// //             if (!PQ[i].IsEmpty()) {
// //                 PQ[i].removal(item);
// //                 return;  // Stop after removing the first available item
// //             }
// //         }
// //         cout << "Priority queue is empty" << endl;
// //         item = -1;
// //     }
// // };

// // int main() {
// //     Deque<int> pq;
// //     pq.Insert(50, 4);
// //     pq.Insert(30, 3);
// //     pq.Insert(20, 2);
// //     pq.Insert(10, 1);

// //     int removedItem;
// //     for (int i = 0; i < 5; i++) {
// //         pq.remova(removedItem);
// //         if (removedItem != -1) {
// //             cout << "Removed:    " << removedItem << "    " << endl;
// //         }
        
// //     }

// //     return 0;
// // }



//--------------------------------------------------------------------------------------------------------------
// // EXERCISE 5.2:

// #include <iostream>
// using namespace std;



// template <class T ,int N >
// class QUeue {
// private:
//     int front, rear, count, maxque;
//     T* items;

// public:
//     QUeue() : front(0), rear(0), count(0), maxque(N + 1) {
//         items = new T[maxque]; 
//     }

//     QUeue(int max) {
//         maxque = N + 1;
//         front = 0;
//         rear = 0;
//         count = 0;
//         items = new T[N];
//     }

//     ~QUeue() {
//         delete[] items;
//     }

//     bool IsEmpty() {
        
//         return count == 0;
//     }

//     bool IsFull() {
//         return count == maxque - 1;
//     }

//     void insert(T newitem) {
//         if (IsFull()) {
//             cout << "Queue is full" << endl;
//             return;
//         }
//         items[rear] = newitem;
//         rear = (rear + 1) % maxque;  
//         count++;
//     }

//     void removal(T& item) { 
//         if (IsEmpty()) {
//             cout << "Queue is empty" << endl;
//             item = -1;
//             return;
//         }
//         item = items[front];
//         front = (front + 1) % maxque;
//         count--;
//     }
// };

// template <class T,int N>
// class Deque {



 
// private:
//     QUeue<T, N>* PQ; //each priority level has its own rear nd front (queue)

// public:

//     Deque() {
//         PQ = new QUeue<T, N>[N]; 
//     }

//     ~Deque() {
//         delete[] PQ;  
//     }
//     bool IsEmpty() {
//         for (int i = 0; i < N; i++) {
//             if (!PQ[i].IsEmpty()) {
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool IsFull() {
//         for (int i = 0; i < N; i++) {
//             if (!PQ[i].IsFull()) {
//                 return false;
//             }
//         }
//         return true;
//     }

//     void Insert(T newitem, int p) {
//         if (p < 0 || p >= N) {
//             cout << "Invalid priority" << endl;
//             return;
//         }
//         if (PQ[p].IsFull()) {
//             cout << "Queue is full" << endl;
//             return;
//         }
//         PQ[p].insert(newitem);
//     }

//     void remova(T& item) {
//         for (int i = 0; i < N; i++) {
//             if (!PQ[i].IsEmpty()) {
//                 PQ[i].removal(item);
//                 return;  // Stop after removing the first available item
//             }
//         }
//         cout << "Priority queue is empty" << endl;
//         item = -1;
//     }
// };

// int main() {
//     Deque<int,5> pq;
//     pq.Insert(50, 4);
//     pq.Insert(30, 3);
//     pq.Insert(20, 2);
//     pq.Insert(10, 1);

//     int removedItem;
//     for (int i = 0; i < 5; i++) {
//         pq.remova(removedItem);
//         if (removedItem != -1) {
//             cout << "Removed:    " << removedItem << "    " << endl;
//         }
        
//     }

//     return 0;
// }


