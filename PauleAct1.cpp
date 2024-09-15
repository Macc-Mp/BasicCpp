#include <iostream>//allow io
#include <conio.h>//console i/o
#include <stdlib.h>//standard library
#include <math.h>// import math
using namespace std;
 //Paule cs231A
 
int main()
{
	char *point;
	char choice;
	int *result;
	
	do {
		cout<<"\nMAIN MENU"<<endl;
		cout<<"[A] Addition" << endl;
		cout<<"[B] Subtraction" << endl;
		cout<<"[C] Multiplication"<<endl;
		cout<<"[D] Division"<<endl;
		
		cout<<"[E] Exit"<<endl;
		cout<<"Choice...: ";
		
		choice=toupper(getch());
		point = &choice;
		
		cout<< *point;
		if (*point == 'A') {
        int *x = new int;
		int *y = new int;

        do {
            cout << "\nAddition" << endl;
            cout << "Enter 2 values separated by space: ";
            cin >> *x >> *y;
        } while (*x <= 0 || *y <= 0);
      		//cout << (long long)&x << " "<< (long long)&y;
			int *a = x;
			int *b = y;
	        int sum = *a + *b;
         
		 	result = &sum;
			
	        cout << "The sum of " << *a << " and " << *b << " is " << *result << endl;
	        cout << "\nPress any key to go back to Main Menu...";
	        getch();
    }
		
		if(*point=='B')
		{ 
            int *x = new int;
			int *y = new int; 
			
			do 
			{
				cout<<"\nSubtraction"<<endl;
				cout<<"Enter 2 values separated by space: ";
				cin>>*x>>*y;
				
			} while(*x<=0 || *y<=0);
			  
			  int *a = x;
			  int *b = y;
			  
			  int diff = *a - *b;
			  
			  result = &diff;
			  
			
			cout<<"The difference of "<<*a<<" and "<<*b<<" is "<<*result<<endl;
			cout<<"\nPress any key to go back to Main Menu...";
			getch();						
		}
		
		
		
		if(*point=='C')
		{ 
			int *x = new int;
			int *y = new int;
			
			do 
			{
				cout<<"\nMultiplication"<<endl;
				cout<<"Enter 2 values separated by space: ";
				cin>>*x>>*y;
				
			} while(*x<=0 || *y<=0);
			  int *a = x;
			  int *b = y;
			
			  //int prod = (*a) * (*b);
			  //*result = &prod;
			  
			  int cnt = 1;
			  int prod = 0;
			  
			  int *c = &cnt;
			  int *p = &prod;
			  

				prod = 0; 
	
				while (*c <= *b) {
				    *p += *a;
				    (*c)++;
				}
				
			     int product = *p;
				 result = &product;
				 			
				cout<<"The product of "<<*a<<" and "<<*b<<" is "<< *result <<endl;
				cout<<"\nPress any key to go back to Main Menu...";
				getch();						
		}
		
		if(*point=='D')
		{ 
			int *x = new int;
			int *y = new int;
			do 
			{
				cout<<"\nDivision"<<endl;
				cout<<"Enter 2 values separated by space: ";
				cin>>*x>>*y;
				
			} while((*x<*y) || (*x<=0 || *y<=0)) ;
			
			  int *a = x;
			  int *b = y;
			  
//			  int quo = *a / *b;
//			  result = &quo;

			  int quo = 0;
			  int *q = &quo;
			  
			  int dummy = *x;
			  int *d = &dummy;
			  
			  while(*d >= *b)
				{
					(*q)++;
					*d= *d - *y;
				}
			  
			
			cout<<"The quotient of "<<*a<<" and "<<*b<<" is "<< *q <<endl;
			cout<<"\nPress any key to go back to Main Menu...";
			getch();
		}
		
		} while(*point!='E');	

}
