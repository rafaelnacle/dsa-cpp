#include <iostream>

using namespace std;

int main() {
    // Not using a pointer (pass by value)
    /* int num1 = 11;
    int num2 = num1;

    num1 = 22;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl; */

    // Using a pointer (pass by reference)
    int* num1 = new int(11);
    int* num2 = num1;  // memory address

    *num1 = 22;  // this will change both num1 and num2 because its the same memory address

    cout << "num1 = " << *num1 << endl;  // dereferencing
    cout << "num2 = " << *num2 << endl;
}
