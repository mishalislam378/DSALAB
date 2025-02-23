//EXAMPLE 3.1:




//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//
//int fact(int n) {
//
//	if (n == 0)
//	{
//		return 1;
//	}
//	else {
//		return n * fact(n - 1);
//
//	}
//}
//int main() {
//	cout << fact(5) << endl;
//	getch();
//	return 0;
//
//
//}

//
//
////EXAMPLE 3.2:
//
//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//
//
//
//void rev() {
//
//	char ch;
//	cin.get(ch);
//	if (ch != '\n') {
//
//		rev();
//		cout.put(ch);
//	}
//}
//
//
//int main() {
//	rev();
//	
//	return 0;
//
//}



////EXAMPLE 3.3: COMPUTING THE POWER:
//#include<iostream>
//using namespace std;
//
//int power(int X, int N) {
//	if (N == 0) {
//		return 1;
//
//
//
//	}
//	else {
//		return power(X, N - 1) * X;
//	}
//}
//



// Exp 3.4


//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int power(int X, int N) {
//	if (N == 0) {
//		return 1;
//
//
//
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		
//		return power(X, N - 1) * X;
//	
//	
//	}
//}
// 
// 
// 
// ---------------------------------------------------------------------------------------------------------
//EX:3.1:

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int power(int X, int N) {
//	if (N == 0) {
//		return 1;
//
//
//
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		
//		return power(X, N - 1) * X;
//	
//	
//	}
//}
// 


//int main() {
	/*int N = 20;  int X = 2;


	for (int i = 0; i < N; i++) {

		cout<< setw(20)<< power(X, i)<<endl;


	}

}*/



// ------------------
////EXercise 3.2:////COMPUTE A(3,4) USING ACKERMANS 
// #include<iostream>
//#include<conio.h>
//using namespace std;
//
//
//
//int Ackerman(int m, int n) {
//
//
//	if (m == 0)
//		return n + 1;
//
//	else if (m > 0 && n == 0)
//	{
//		return Ackerman(m - 1, 1);
//	}
//
//	else if (m > 0 && n > 0) {
//		return Ackerman(m - 1, Ackerman(m, n - 1));
//	}
//}
//
//int main() {
//
//
//
//	cout<< Ackerman(3, 4);
//}
//
//
// 




//--------------------------------------------------------------------------------
//exercise 3.3:Part a 
//#include<iostream>
//using namespace std;
//
//void printnumbers(int N) {
//
//
//	if (N < 0) {
//		exit (1);
//	}
//
//	else {
//		
//		cout << N << endl;
//		printnumbers(N - 1);
//
//	}
//
//
//}
//
//int main() {
//	int N = 20;
//
//
//
//	printnumbers(20);
//
//
//
//
//
//
//
//
//}
//


//EXERCISE 3.3 B:

//
// #include<iostream>
//#include<conio.h>
//using namespace std;



//int binomialcoeff(int n, int k) {
//
//
//	if (n== k)
//		return  1;
// 
// 
//
//	else if (n>0 && k == 0)
//	{
//		return 1;
// }
//
//	else if (k > 0 && k>n && n>1) {
// 
// 
//		return (n-1 ,k-1)+  (n-1,k);
//	}
//}
//
//int main() {
//
//
//	cout<< binomialcoeff( 4 ,  3);
//
//
//}



////EXER 3.3 PART C
//
//#include<iostream>
//using namespace std;
//
//int  checkprime(int n,int div  ) {
//
//
////three bases cases//
//	if (n < 2) {
//		return false;
//	}
//	else if (div == n - 1) {
//		return true;
//	}
//	else if (n % div == 0) {
//		return false;
//	}
//	else {
//		return prime(n, div + 1);
//	}
//}
//int main() {
//
//	int num;
//	string choice;
//	do {
//		cout << "enter  a number fr which u want to check  ";
//		cin >> num;
//		if (checkprime(num, 2))
//			cout <<num<< " is prime number.\n";
//		else
//			cout <<num<< " is not a prime number.\n";
//		cout << "do u want to repeat ?";
//		cin >> choice;
//	} 
//	while (choice == "yes" || choice == "Yes");
//}
//	
//

