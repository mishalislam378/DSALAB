 




 
// //journal 2 week2 example 2 
// //stack.cpp
// #include<iostream>
// #include<stdlib.h>
// #include<string>
// #include "dynamicstack.h"
// using namespace std;

// template <class ItemType>
// stack<ItemType>::stack() {
//     maxStack = 500;
//     top = -1;
//     items = new ItemType[500];
// }

// template <class ItemType>
// stack<ItemType>::stack(int max) {
//     maxStack = max;
//     top = -1;
//     items = new ItemType[max];
// }

// template <class ItemType>
// stack<ItemType>::~stack() {
//     delete[] items;  
// }

// template <class ItemType>
// bool stack<ItemType>::IsEmpty() const {
//     return (top == -1);
// }

// template <class ItemType>
// bool stack<ItemType>::IsFull() const {
//     return (top == maxStack - 1);
// }

// template <class ItemType>
// void stack<ItemType>:: push(ItemType newitem) {
//     if (IsFull()) {
//         cout << "Overflow!" << endl;
//         exit(1);
//     }
//     else {
//         top++;
//         items[top] = newitem;  
//     }
// }

// template <class ItemType>
// void stack<ItemType>::pop(ItemType& item) {
//     if (IsEmpty()) {
//         cout << "Underflow!" << endl;
//         exit(1);
//     }
//     else {
//         item = items[top];  
//         top--;  
//     }
// }

// //



//------------------------------------------------------------------------------------------------

//exercise2.2 part a 
 //stack.cpp
// #include<iostream>
// #include<stdlib.h>
// #include<string>
// #include "dynamicstack.h"
// using namespace std;

// template <class ItemType>
// stack<ItemType>::stack() {
//     maxStack = 500;
//     top = -1;
//     items = new ItemType[500];
// }

// template <class ItemType>
// stack<ItemType>::stack(int max) {
//     maxStack = max;
//     top = -1;
//     items = new ItemType[max];
// }

// template <class ItemType>
// stack<ItemType>::~stack() {
//     delete[] items;  
// }

// template <class ItemType>
// bool stack<ItemType>::IsEmpty() const {
//     return (top == -1);
// }

// template <class ItemType>
// bool stack<ItemType>::IsFull() const {
//     return (top == maxStack - 1);
// }

// template <class ItemType>
// void stack<ItemType>::push(ItemType newitem) {
//     if (IsFull()) {
//         cout << "Overflow!" << endl;
//         exit(1);
//     }
//     else {
//         top++;
//         items[top] = newitem;  
//     }
// }


// template <class ItemType>
// void stack<ItemType>::pop(ItemType& item) {
//     if (IsEmpty()) {
//         cout << "Underflow!" << endl;
//         exit(1);
//     }
//     else {
//         item = items[top];  
//         top--;
//     }
// }


// template <class ItemType>
// void stack<ItemType>::validity(std::string& exp) {
//     stack<char> temp;  
//     char ch;

//     for (int i = 0; i < exp.length(); i++) {
//         if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
//             temp.push(exp[i]);  
//         }
//         else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
//             if (temp.IsEmpty()) {
//                 cout << "Invalid expression: No matching opening bracket for " << exp[i] << endl;
//                 return;
//             }
//             temp.pop(ch);  
            
//             if ((ch == '(' && exp[i] != ')') ||
//                 (ch == '{' && exp[i] != '}') ||
//                 (ch == '[' && exp[i] != ']')) {
//                 cout << "Invalid expression: Mismatched brackets" << endl;
//                 return;
//             }
//         }
//     }

    
//     if (temp.IsEmpty()) {
//         cout << "Expression is valid" << endl;
//     }
//     else {
//         cout << "Invalid expression: Some opening brackets are not closed" << endl;
//     }
// }
// //--------------------------------------------------------------------






//solution of Exercise 2.2 (part b nd c) is  mentioned in static stack.h,main.cpp,stack.cpp


//-------------------------------------------------------------------------------------

