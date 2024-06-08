#include <iostream>
using namespace std;

int main(){
    
    while(true){
        cout << "Enter Age: ";
        int age;
        
        cin >> age;
            if(age >= 18){
                cout << age << ", Adult\n";
                
            }
            else if(age < 18 && age > 12){
                cout << age << ",Teen\n";
            }
            else if(age <12){
                cout << age << ", still a kid\n";
            }
            else{
                cout << "Encountered an error\n";
            }

            cout << "Continue Y/N? " ;
            char inpts;
                cin >> inpts ;
                    if((char)toupper(inpts) == 'Y'){
                        cout << inpts << " Understood\n";
                    }
                    else if ((char)toupper(inpts) == 'N'){
                        cout << inpts << " End program!\n";
                        break;
                    }

    }

    return 0;
}