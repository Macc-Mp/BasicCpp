#include <iostream>
using namespace std;

int main() {
    int mult[10][10];
    cout << "Multiplication table using 2d array + store values using pointers" << endl;
    // Use pointers to access array elements for better efficiency
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            *(*mult + x *10  + y) = (x + 1) * (y + 1);
        }
    }

    cout << endl;

    // Print the multiplication table using pointers for clarity
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            cout << "\t" << *(*mult + x * 10 + y);
        }
        cout << endl;
    }
    
    return 0;
}
