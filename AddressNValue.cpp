#include <iostream>
using namespace std;

int main(){
			int x = 10;
		// & reference exact address of x
		int *y = &x;
	
		cout << y << ", X: "<< x  << endl;
		cout << *y << ", X: "<< x  << endl; 

		cout << "Address of x: "<<(long long) &x <<endl;
		cout << "Address of &y: "<<(long long) &y << endl;
		cout << "Address of y: "<<(long long) y <<endl;
		
		//Pointer reference changes value of using y
		*y = 100;
		cout <<"Value of x " << x << endl;
		cout <<"Value of (2)y " << (long long)y << "=="<< *y << endl;

		//RV Memory address 
		// LV Value to be assigned
		
		int z = *y;
		cout << "Value of Z: " << z;
	
}
