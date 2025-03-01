//#include<iostream>
//using namespace std;
////////
////////
//#define maxque 100
//typedef int ItemType;
//
//class Queue {
//private:
//    ItemType items[maxque];
//    int front, rear, count;
//public:
//    Queue();
//    int IsEmpty();
//
//    int IsFull();
//    void Insert(ItemType newitem);
//    void Remove(ItemType& item);
//
//
//
//};
//
//Queue:: Queue () {
//
//
//    rear = 0;
//    front = 0;
//    count = 0;
//
//}
//
//
//int Queue::IsEmpty() {
//    return(count == 0);
//
//}
//
//int Queue::IsFull() {
//    return count == maxque;
//
//}
//
//void Queue::Insert(ItemType newitem) {
//    if (IsFull())
//        cout << " overflow";
//
//
//
//    else {
//        items[rear] = newitem;
//        rear = (rear + 1) % maxque;
//        ++count;
//    }
//
//}
//
//void Queue :: Remove(ItemType& item) {
//
//    if (IsEmpty()) 
//        cout << " underflow ";
//    else {
//        item = items[front];
//        front = (front + 1) % maxque;
//        --count;
//
//    }
//    }
// 
// -----------------------------------------------------------------------------------------------------------------------------
////////EXERCISE 4.1: //printing numbers .................
//////
//////int main() {
//////     Queue q;
//////
//////     for (int i = 0; i < 10; i++) {
//////         q.Insert(i);
//////     }
//////     
//////         int item;
//////     for (int i = 0; i < 10; i++) {
//////         q.Remove(item);
//////         cout << item<<"      ";
//////     }
//////
//////
//////
//////}
// ---------------------------------------------------------------------------------------------------------
////
////
//////EXAMPLE 4.2:
////
////#include<iostream>
////using namespace std;
////
////
////template <class ItemType> class Que {
////public:
////    Que();
////    Que(int max);
////    ~Que();
////    int IsFull() const;
////    int IsEmpty() const;
//// void Insert(ItemType newItem);
////void Remove(ItemType& item);
////
////private:
////    int front;
////    int rear;
////    int maxque;
////    int count;
////    ItemType* items;
////};
////
////
////template<class ItemType> Que <ItemType>::Que() {
////    maxque = 501;
////    front = 0
////        rear = 0;
////    count = 0;
////    items = new ItemType[maxque];
////
////}
////     
////
////template<class ItemType> Que <ItemType >
////::Que(int max) {
////
////    maxque = max +1;
////    front = 0;
////        rear = 0;
////    count = 0;
////    items = new ItemType[maxque];
////
////}
////
////template<class ItemType> Que <ItemType> :: ~Que(){
////    delete[] items;
////}
////
////
////template<class ItemType>
////int Que <ItemType>::IsEmpty() const {
////
////
////    return (count == 0);
////
////}
////
////template<class ItemType>
////int Que <ItemType>::IsFull() const {
////
////
////    return (count == maxque);
////
////}
////
////template<class ItemType>
////void  Que <ItemType>::Insert(ItemType newItem) {
////
////    if (IsFull()) {
////        cout << " overflow";
////
////
////    }
////
////    else {
////        items[rear] = newItem;
////        rear = (rear + 1) % maxque;
////        ++count;
////
////
////    }
////}
////
////template<class ItemType> void Que <ItemType>::Remove(ItemType& item) {
////
////
////
////    if (IsEmpty()) {
////        cout << " underflow";
////    }
////    else {
////        item = items[front];
////        front = (front + 1) % maxque;
////        --count;
////
////
////}
////}

//
//-----------------------------------------------------------------------------------------------------------------------
//

// --------------------------------------------------------------------------------------------------------------
//EXERCISE 4.2:     //insert names..........
//#include<iostream>
//using namespace std;
////////
////////
//#define maxque 100
//typedef string ItemType;
//
//class Queue {
//private:
//    ItemType items[maxque];
//    int front, rear, count;
//public:
//    Queue();
//    int IsEmpty();
//
//    int IsFull();
//    void Insert(ItemType newitem);
//    void Remove(ItemType& item);
//
//
//
//};
//
//Queue::Queue() {
//
//
//    rear = 0;
//    front = 0;
//    count = 0;
//
//}
//
//
//int Queue::IsEmpty() {
//    return(count == 0);
//
//}
//
//int Queue::IsFull() {
//    return count == maxque;
//
//}
//
//void Queue::Insert(ItemType newitem) {
//    if (IsFull())
//        cout << " overflow";
//
//
//
//    else {
//        items[rear] = newitem;
//        rear = (rear + 1) % maxque;
//        ++count;
//    }
//
//}
//
//void Queue::Remove(ItemType& item) {
//
//    if (IsEmpty())
//        cout << " underflow ";
//    else {
//        item = items[front];
//        front = (front + 1) % maxque;
//        --count;
//
//    }
//}
//int main() {
//    Queue s;
//    string names[10] = { "Maryam","Haya ","khadija","faryal","almas","adan","maira","iqra","yusra","maria" };
//
//    for (int i = 0; i < 10; i++) {
//        s.Insert(names[i]);
//    }
//    cout << endl;
//    string item;
//    for (int i = 0; i < 10; i++) {
//        s.Remove(item);
//        cout << item << endl;
//    }
//
//}
//
//

//----------------------------------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------------
////Exercise  4.3:   //Deque class 
//
//#include <iostream>
//using namespace std;
//
//class Deque {
//private:
//    static const int N = 100; 
//    int array[N];
//    int front, rear, count;
//
//public:
//    Deque() : front(-1), rear(-1), count(0) {}
//
//    void InsertRear(int newitem) {
//        if (IsFull()) {
//            cout << "Deque is full" << endl;
//            return;
//        }
//        if (rear == -1) { // first element
//            front = rear = 0;
//        }
//        else {
//            rear = (rear + 1) % N; // wrap around
//        }
//        array[rear] = newitem;
//        count++;
//    }
//
//    bool RemoveRear(int& item) {
//        if (IsEmpty()) {
//            cout << "Deque is empty" << endl;
//            return false;
//        }
//        item = array[rear];
//        count--;
//        if (front == rear) { // Only one element present
//            front = rear = -1;
//        }
//        else {
//            rear = (rear - 1 + N) % N; 
//        }
//        return true;
//    }
//
//    void InsertFront(int newitem) {
//        if (IsFull()) {
//            cout << "Deque is full" << endl;
//            return;
//        }
//        if (front == -1) { 
//            front = rear = 0;
//        }
//        else {
//            front = (front - 1 + N) % N; 
//        }
//        array[front] = newitem;
//        count++;
//    }
//
//    bool RemoveFront(int& item) {
//        if (IsEmpty()) {
//            cout << "Deque is empty" << endl;
//            return false;
//        }
//        item = array[front];
//        count--;
//        if (front == rear) { 
//            front = rear = -1;
//        }
//        else {
//            front = (front + 1) % N; 
//        }
//        return true;
//    }
//
//    bool IsEmpty() {
//        return (front == -1 && rear == -1);
//    }
//
//    bool IsFull() {
//        return count == N;
//    }
//};

//------------------------------------------------------------------------------------------------------------------
////Exercise 4.4:        template class :
//#include <iostream>
//
//using namespace std;
//
//template <typename T, int N>
//class Deque {
//private:
//    T* array;
//    int front, rear, count;
//
//public:
//    Deque() : front(-1), rear(-1), count(0) {
//        array = new T[N];
//    }
//
//    ~Deque() {
//        delete[] array;
//    }
//
//    void InsertRear(const T& newitem) {
//        if (IsFull()) {
//            cout << "full" << endl;
//            return;
//        }
//        if (rear == -1) {
//            front = rear = 0;
//        }
//        else {
//            rear = (rear + 1) % N;
//        }
//        array[rear] = newitem;
//        count++;
//    }
//
//    void InsertFront(const T& newitem) {
//        if (IsFull()) {
//            cout << "full" << endl;
//            return;
//        }
//        if (front == -1) {
//            front = rear = 0;
//        }
//        else {
//            front = (front - 1 + N) % N;
//        }
//        array[front] = newitem;
//        count++;
//    }
//
//    bool RemoveRear(T& item) {
//        if (IsEmpty()) {
//            cout << "empty" << endl;
//            return false;
//        }
//        item = array[rear];
//        count--;
//        if (front == rear) {
//            front = rear = -1;
//        }
//        else {
//            rear = (rear - 1 + N) % N;
//        }
//        return true;
//    }
//
//    bool RemoveFront(T& item) {
//        if (IsEmpty()) {
//            cout << "empty" << endl;
//            return false;
//        }
//        item = array[front];
//        count--;
//        if (front == rear) {
//            front = rear = -1;
//        }
//        else {
//            front = (front + 1) % N;
//        }
//        return true;
//    }
//
//    bool IsEmpty() const {
//        return count == 0;
//    }
//
//    bool IsFull() const {
//        return count == N;
//    }
//};
//
//int main() {
//    Deque<int, 5> intDeque;
//
//
//    intDeque.InsertRear(10);
//    intDeque.InsertFront(20);
//    intDeque.InsertRear(30);
//    intDeque.InsertFront(40);
//    intDeque.InsertRear(50);
//
//
//    intDeque.InsertRear(60);
//
//
//    int item;
//    while (!intDeque.IsEmpty()) {
//        intDeque.RemoveFront(item);
//        cout << "Removed from front: " << item << endl;
//    }
//
//
//    intDeque.RemoveFront(item);
//
//    return 0;
//}
//











