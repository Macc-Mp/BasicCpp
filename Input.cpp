#include <iostream>

using namespace std;

int main() {
//Comment Line
  cout << "Hello World!";

//integer data types
  int addend1 = 5;
  int addend2 = 5;
  int sum = addend1 + addend2;
    char initial = 'k';
    double num1 = 10.90;
    
//Printout
  cout << "\nSum: " << sum;

  cout << "Enter Name: ";
  //String holds input variable
    string name = "";

//Input method : cin >>
  cin >> name;

//print input
  cout << "\nName: " << name;

  return 0;
}