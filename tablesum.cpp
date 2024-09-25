#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int arr[10][10];
    int *ptr;

    // Initialize the array with random values for demonstration
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    // Calculate the sum of each row
    int rowSum[10] = {0};
    for (int i = 0; i < 10; i++) {
        ptr = &arr[i][0];
        for (int j = 0; j < 10; j++) {
            rowSum[i] += *ptr;
            ptr++;
        }
    }

    // Calculate the sum of each column
    int colSum[10] = {0};
    for (int j = 0; j < 10; j++) {
        ptr = &arr[0][j];
        for (int i = 0; i < 10; i++) {
            colSum[j] += *ptr;
            ptr += 10; // Increment pointer by row size
        }
    }

    // Print the sum of each row and column
    cout << "Sum of each row:\n";
    for (int i = 0; i < 10; i++) {
        cout << rowSum[i] << " ";
    }
    cout << endl;

    cout << "Sum of each column:\n";
    for (int j = 0; j < 10; j++) {
        cout << colSum[j] << " ";
    }
    cout << endl;

    return 0;
}
