#include <iostream>
#include <string>

using namespace std;

int main() {
    // string colors[] = {"Red", "Orange", "Yellow", "Blue", "Violet"};
    // cout << colors[0];

    double av[] = {95, 92, 93, 65, 78};
    double sum = 0;

    int arrayLength = sizeof(av) / sizeof(av[0]);

    for (int i = 0; i < arrayLength; i++) {
        cout << av[i] << endl; // Print each element of the array
        sum += av[i]; // Add the current element to the sum
    }

    cout << "Sum of Grades: " << sum << endl;
    cout << "Average: " << sum / arrayLength << endl;

    return 0;
}