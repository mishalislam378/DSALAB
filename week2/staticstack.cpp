



// // stack.cpp of example 1  nd ex 2.1 part a(peek func implememntedweek2 ) journal2
// #include<stdlib.h>
// #include<iostream>

// #include  "staticstack.h"

// using namespace std;

// stack::stack() {
// 	top = -1;
// }

// int stack::IsEmpty() const {
// 	return (top == -1);
// }int stack::IsFull() const {
// 	return (top == MAX_ITEMS - 1);
// }

// void stack ::push(ItemType newItem) {
// 	if (IsFull()) {
// 		cout << "Stack overflow" << endl;
// 		exit(1);
// 	}
// 	top++;
// 	items[top] = newItem;

// }


// void stack::pop(ItemType& item) {
// 	if (IsEmpty()) {

// 		cout << " stack underflow " << endl;
// 		exit(1);




// 	}
// 	item = items[top];
// 	top--;
// }
 
// int stack::peek(ItemType& item) {
	
// 	item = items[top];
// 	return item;
// }


// //-------------------------------------------------------------------------------------------------------------------
// //--------------------------------------------------------------------------------------------------------
 

 // stack.cpp ex2.1 partt b reversed string 
// #include<iostream>
// #include<stdlib.h>
// #include<string>
// #include "staticstack.h"
// using namespace std;


// stack::stack() {
// 	top = -1;
// }
// bool stack::IsEmpty() const {
// 	return (top == -1);
// }
// bool stack::IsFull() const {
// 	return (top == MAX_ITEMS - 1);

// }

// void stack::push(Itemstype& newitem) {
// 	if (IsFull()) {
// 		cout << " overflow";
// 		exit(1);

// 	}
// 	else {
// 		top++;
// 		items[top] = newitem;
// 	}
// }
// void stack::pop(Itemstype& item) {
// 	if (IsEmpty()) {
// 		cout << " underflow";
// 		exit(1);

// 	}
// 	else {
// 		item = items[top];
// 		top--;
// 	}
// }



// void stack::reversestring(string& s) {
// 	stack reversedstring;
// 	for (int i = 0; i < s.length(); i++) {   
// 		reversedstring.push(s[i]);

// 	}

// 	cout << " popping put to make the string reversed :" << endl;

// 	for (int i = 0; i < s.length(); i++) {
// 		char ch;
// 		reversedstring.pop(ch);
// 		cout << ch;
// 	}
// 	cout << "        ";

// }


//-----------------------------------------------------------

//solution of ex 2.2 part a given in dynamic: .h,main.cpp,stack.h
//Exercise 2.2 part b 


//#include<iostream>
// #include<stdlib.h>
// #include<string>
// #include "staticstack.h"
// using namespace std;


// stack::stack() {
// 	top = -1;
// }
// bool stack::IsEmpty() const {
// 	return (top == -1);
// }
// bool stack::IsFull() const {
// 	return (top == MAX_ITEMS - 1);

// }

// void stack::push(Itemstype& newitem) {
// 	if (IsFull()) {
// 		cout << " overflow";
// 		exit(1);

// 	}
// 	else {
// 		top++;
// 		items[top] = newitem;
// 	}
// }
// void stack::pop(Itemstype& item) {
// 	if (IsEmpty()) {
// 		cout << " underflow";
// 		exit(1);

// 	}
// 	else {
// 		item = items[top];
// 		top--;
// 	}
// }


// int  stack:: precedence(char op) {
//     if (op == '+' || op == '-')
//         return 1;
//     if (op == '*' || op == '/')
//         return 2;
//     return 0; 
// }

// string stack:: infixToPostfix(string exp) {
//     stack<char> s;
//     string postfix = "";

//     for (char ch : exp) {
//        
//         if (isalnum(ch)) {
//             postfix += ch;
//         }
//         
//         else if (ch == '(') {
//             s.push(ch);
//         }
//        
//         else if (ch == ')') {
//             while (!s.empty() && s.top() != '(') {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.pop(); // Remove '(' from the stack
//         }
//         else{
//             while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.push(ch);
//         }
//     }

//    
//     while (!s.empty()) {
//         postfix += s.top();
//         s.pop();
//     }

//     return postfix;
// }




//exercise 2.2 part c  stack.cpp



//#include<stdlib.h>
// #include<iostream>

// #include  "staticstack.h"

// using namespace std;

// stack::stack() {
// 	top = -1;
// }

// int stack::IsEmpty() const {
// 	return (top == -1);
// }int stack::IsFull() const {
// 	return (top == MAX_ITEMS - 1);
// }

// void stack ::push(ItemType newItem) {
// 	if (IsFull()) {
// 		cout << "Stack overflow" << endl;
// 		exit(1);
// 	}
// 	top++;
// 	items[top] = newItem;

// }


// void stack::pop(ItemType& item) {
// 	if (IsEmpty()) {

// 		cout << " stack underflow " << endl;
// 		exit(1);




// 	}
// 	item = items[top];
// 	top--;
// }
 

// int stack::evaluatePostfix(string exp) {
//     stack<int> s;

//     for (char ch : exp) {
     
//         if (isdigit(ch)) {
//             s.push(ch - '0');
//         }
       
//         else {
//             int operand2 = s.top(); s.pop();
//             int operand1 = s.top(); s.pop();

//             switch (ch) {
//                 case '+': s.push(operand1 + operand2); break;
//                 case '-': s.push(operand1 - operand2); break;
//                 case '*': s.push(operand1 * operand2); break;
//                 case '/': s.push(operand1 / operand2); break;
//             }
//         }
//     }

//     return s.top();
// }


