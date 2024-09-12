#include <iostream>
using namespace std;

int main()
{
//	cout << sizeof(int);
	
//	float grade[] = {78,67, 8, 90, 5,56,77,11,-1};
//
//
//		for(int x =0; x < sizeof(grade)/sizeof(float); x++){
//			//use x+1 to remove index[0]
//			cout << "grade[" << x+1 <<"] =" <<grade[x] <<endl;
//			
//		}

//		float grade[5];
//
//		
//		for(int x =0; x < sizeof(grade)/sizeof(float); x++){
//			do{
//			
//			cout << "Enter [" << x+1 << "]: ";
//			cin >> grade[x];
//			
//			}while(grade[x] < 0 || grade[x] > 100);
//			
//		}
//		
//		for(int x =0; x < sizeof(grade)/sizeof(float); x++){
//		
//			cout << "grade[" << x+1 <<"] =" <<grade[x] <<endl;
//			
//		}
	
//	char name[20];
//
//		cout << "Enter your name: ";
//		cin >> name;
//		
//		cout << "Good Morning! " << name;
//		cout << "Good Morning! " << name[5];
		
//		int x = 10; 6ffe14
//		cout << x;
//		
		int x = 10;
		// & reference exact address of x
		int *y = &x;
		cout << y << "X: "<< x  << endl;

		cout << "Address of x: "<<(long long) &x <<endl;
		cout << "Address of &y: "<<(long long) &y << endl;
		cout << "Address of y: "<<(long long) y <<endl;
		//Pointer reference changes value of using y
		*y = 100;
		cout <<"Value of x " << x;

		//RV Memory address 
		// LV Value to be assigned
		
		int z = *y;
		cout << "Value of Z: " << z;
	return 0;
}
