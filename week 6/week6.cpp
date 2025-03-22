// #include<iostream>
// #include<string>
// using namespace std;

// template<class ItemType >



// class list {



// protected :
// 	struct node {
// 		ItemType info;
// 		struct node* next;

		
// 	};

// 	typedef struct node* NODEPTR;

// 	NODEPTR listptr;
// public:
// 	list();
// 	~list();
// 	bool emptyList();
// 	void insertafter(ItemType oldvalue, ItemType newvalue);
// 	void deleteItem(ItemType oldvalue);
// 	void push(ItemType newvalue);
// 	void reversestring(string& s);
// 	ItemType pop();



	


// };



// template<class ItemType> 
// list <ItemType>
// ::list() {
// 	listptr = 0;

// }




// //destructor 
// template<class ItemType >
// list <ItemType> :: ~list() {

// 	NODEPTR p, q;
// 	if (emptyList()) {

// 		exit(0);
// 	}

// 	for (p = listptr, q = p->next; p != 0; p = q, q = p->next) {
// 		delete p;

// 	}
// }

// template<class ItemType>
// void list<ItemType>::insertafter(ItemType oldvalue, ItemType newvalue) {
// 	NODEPTR p, q;
// 	for (p = listptr; p != nullptr && p->info != oldvalue; p = p->next);

// 	if (p == nullptr) {
// 		cout << "Error: value sought is not in the list.\n";
// 		return;  // Stop further execution to prevent segmentation fault
// 	}
// 		q = new node;
// 		q->info = newvalue;
// 		q->next = p->next;
// 		p->next = q;

// 	}

// 	template <class ItemType>  bool  list <ItemType> ::emptyList() {
// 		return (listptr == 0);
// 	}

// 	template<class ItemType > void list <ItemType> ::push(ItemType newvalue) {
// 		NODEPTR p;
// 		p = new node;
// 		p->info = newvalue;
// 		p->next = listptr;
// 		listptr = p;

// 	}


// 	template <class ItemType >
// 	void list<ItemType> ::deleteItem(ItemType oldvalue) {

// 		NODEPTR p, q;
// 		for (q = 0, p = listptr; p != 0 && p->info != oldvalue; q = p, p = p->next);
// 		if (p == 0) {
// 			cout << " eroor : value spught is not found in the list ";
// 		}


// 		if (q == 0) {
// 			listptr = p->next;

// 		}

// 		else {
// 			q->next = p->next;

// 		}



// 		delete p;

// 	}


// 	template<class ItemType>
// 	ItemType list <ItemType>::pop() {
// 		NODEPTR p;
// 		ItemType x;

// 		if (emptyList()) {
// 			cout << " eroor: the list is empty ";
// 			exit(1);
// 		}

// 		p = listptr;
// 		listptr = p->next;
// 		x = p->info;
// 		delete p;
// 		return x;



// 	}

// 	//-----------EXERCISE6.2--------------
// 	template<class ItemType >
// 	void list<ItemType> ::reversestring(string & s) {
// 			 	list  reversedstring;
// 			 	for (int i = 0; i < s.length(); i++) {   
// 			 		reversedstring.push(s[i]);

// 			 	}

// 			 	cout << " string reversed :" << endl;

// 				while (!reversedstring.emptyList()) {  
// 					cout << reversedstring.pop();
// 				}

// 				cout << endl;

// 			 }
	
	

	
	



	



// 	int main(){
// 		list <char> s;
// 		//--------------EXERCISE 6.2---------- :
// 		string si;
// 		cout << " plz enter string ";

// 		getline(cin, si);
//  s.reversestring(si);
// 		return 0;

	
// 		//--------------------EXERCISE 6.1:--------------------

// 		list <int > l;
// 	l.push(86);
// 	cout << l.pop() << endl;

// 	l.deleteItem(86);
// 	l.emptyList();
// 	l.insertafter(86,89);
// 	return 0;
// }