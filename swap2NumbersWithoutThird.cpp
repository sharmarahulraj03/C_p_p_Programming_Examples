#include <iostream>
using namespace std; 

int main() {
    int a, b; 

    cout << "Enter the value for 2 variables:" <<endl;
    cout << "Enter Value of a = ";
    cin >> a;
    cout << "Enter Value of b = ";
    cin >> b;

    cout << "Before swaping numbers are :" << endl;
    cout << "a = " <<a << endl;
    cout << "b = " <<b << endl;

    a = a + b;     //a = 10 + 20 -> 30
    b = a - b;     //b = 30 - 20 -> 10
    a = a - b;     //a = 30 - 10 -> 20

    cout << "After swaping numbers are :" << endl;
    cout << "a = " <<a << endl;
    cout << "b = " <<b << endl;

    return 0;
}