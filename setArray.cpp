#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int size;
    int num;
    char inp;

    do {
        cout << "Enter Array Y/N? ";
        inp = getch();
        inp = toupper(inp);

        if (inp == 'Y') {
            cout << "Enter the desired array size: ";
            cin >> size;

            if (size <= 0) {
                cout << "Invalid array size. Please enter a positive value.\n";
                continue; // Continue the loop if the size is invalid
            }

            int array[size];

            cout << "Enter values for the array:\n";

            for (int i = 0; i < sizeof(array)/ sizeof(float); i++) {
                cout << "Enter value [" << i + 1 << "]: ";
                cin >> num;
                array[i] = num;

            }

            cout << "\nEntered values:\n";
            for (int i = 0; i < sizeof(array)/ sizeof(float); i++) {
                cout << array[i] << " " << endl;
            }
            
        } else if (inp == 'N') {
            cout << "Program End" << endl;
            
            break; // Exit the loop if the user enters 'N'
            
        } else {
            cout << "Invalid input. Please enter 'Y' or 'N'.\n";
        }
        
        
    } while (inp == 'Y');

    return 0;
}
