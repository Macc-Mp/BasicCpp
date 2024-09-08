#include <iostream>//allow io
#include <conio.h>//console i/o
#include <stdlib.h>//standard library
#include <math.h>// import math
 
using namespace std;
 
 
int main()
{
	char choice;
	do {
		//system("cls");
		cout<<"MAIN MENU"<<endl;
		cout<<"A. Multiplication"<<endl;
		cout<<"B. Division"<<endl;
		cout<<"C. Factorial"<<endl;
		cout<<"D. Prime/Composite"<<endl;
		cout<<"E. Exit"<<endl;
		cout<<"Choice...: ";
		
		choice=toupper(getch());
		cout<<choice;
		
		if(choice=='A')
		{ 
			int x, y;
			do 
			{
				cout<<"\nMultiplication"<<endl;
				cout<<"Enter 2 values separated by space: ";
				cin>>x>>y;
				
			} while(x<=0 || y<=0);
			int cnt=1, prod=0;
			
			while(cnt<=y)
			{
				prod=prod+x;
				cnt++;
			}
			cout<<"The product of "<<x<<" and "<<y<<" is "<<prod<<endl;
			cout<<"\nPress any key to go back to Main Menu...";
			getch();						
		}
		
		if(choice=='B')
		{ 
			int x, y;
			do 
			{
				cout<<"\nDivision"<<endl;
				cout<<"Enter 2 values separated by space: ";
				cin>>x>>y;
				
			} while((x<y) || (x<=0 || y<=0)) ;
			
			int quo=0;
			int dummy=x;
			while(dummy>=y)
			{
				quo++;
				dummy=dummy-y;
			}
			cout<<"The quotient of "<<x<<" and "<<y<<" is "<<quo<<endl;
			cout<<"\nPress any key to go back to Main Menu...";
			getch();
		}
		if(choice=='C')
		{ 
			int x,y;
			do 
			{
				cout<<"\nFactorial"<<endl;
				cout<<"Enter a value : ";
				cin>>x;
			} while(x<=0) ;
			int fact=1;
			int dummy=x;
			while(dummy>1)
			{
				fact=fact*dummy;
				dummy--;
			}
			cout<<"The factoria of "<<x<<" is "<<fact<<endl;
			cout<<"\nPress any key to go back to Main Menu...";
			getch();						
		}
		if(choice=='D')
		{ 
			int x;
			do 
			{
				cout<<"\nPrime/Factorial"<<endl;
				cout<<"Enter a value : ";
				cin>>x;
			} while(x<=1) ;
			int half=x/2;
			int flag=0;
			for(int cnt=2; cnt<=half; cnt++)
				if(x%cnt==0)
				{
					flag=1;
					break;
				}
			if(flag==1)
				cout<<x<<" is composite"<<endl;
			else
				cout<<x<<" is prime"<<endl;
			cout<<"\nPress any key to go back to Main Menu...";
			getch();						
		}		
		} while(choice!='E');	

}
