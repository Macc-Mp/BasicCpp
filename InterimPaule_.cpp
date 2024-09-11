#include <iostream>
using namespace std;
//InterimPaule - Moises Paule cs231a

int main() {
	//Montero's retirement funds
    long monteroMoney = 2000000;
    //borrowed money, monthly, profit
    long bMoney = 0, monthly = 0, profit = 0;

	//computation original, monthly payment
    long comp = 0, org = 0, mp = 0;
    
    //borrowed money / months
    long cMonthly;
    
    //borrow again
	char bAgain;
	
    int m;
	
	//Loop until 'n' is entered
    do {
    	//Input for initial borrowing
    	cout << "Current Funds: " << monteroMoney << endl;
        cout << "Amount to be borrowed: ";
        cin >> bMoney;
        
        if(bMoney > monteroMoney){
        	cout << "Borrowed money cannot exceed current funds" << endl;
		}
        else{
		
        monteroMoney = monteroMoney - bMoney;

        cout << "Number of months: ";
        cin >> m;

		//1-4 months
        if (m >= 1 && m <= 4) {
            //comp for interest
            comp = (0.025 * bMoney); 
            //borrowed money / months
            cMonthly = bMoney/m;
            
            //monthly payment
            org = cMonthly + comp;
            //profit
            profit = comp *m;
            mp = org / m;

            cout << "Your monthly payment is: " << org << endl;
            cout << "Profit: " << profit << endl;
            
          //5-8 months  
        } else if (m >= 5 && m <= 8) {
            
            comp = (0.03 * bMoney);
            cMonthly = bMoney/m;
            org = cMonthly + comp;
            profit = comp *m;
            mp = org / m;

            cout << "Your monthly payment is: " << org << endl;
            cout << "Profit: " << profit << endl;
          
		  //9-12 months  
        } else if (m >= 9 && m <= 12) {
    	    
            comp = (0.035 * bMoney);
            cMonthly = bMoney/m;
            org = cMonthly + comp;
            profit = comp *m;
            mp = org / m;

            cout << "Your monthly payment is: " << org << endl;
            cout << "Profit: " << profit << endl;
            
        } else {
        	
            cout << "Invalid, No amount is deducted: ";
            //return borrowed money if error occurs
            monteroMoney = monteroMoney + bMoney;
        }
        
    }
        
	   //Option to borrow again	
       cout << "Funds after deduction: " << monteroMoney <<endl; 
       cout << "Borrow Again? y/n ";
       
	   cin >> bAgain; 
	   bAgain = tolower(bAgain);
	   cout <<"===========================" << endl;
	   
    } while (bAgain == 'y');

 

    return 0;
}
