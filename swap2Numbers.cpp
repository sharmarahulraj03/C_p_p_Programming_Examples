#include <iostream>
using namespace std; 

int main() {
    int a = 10;
    int b = 20; 
    int tmp; 

    cout << "Before swaping numbers are :" << endl;
    cout << "a = " <<a << endl;
    cout << "b = " <<b << endl;

    tmp = a;
    a = b; 
    b = tmp; 

    cout << "After swaping numbers are :" << endl;
    cout << "a = " <<a << endl;
    cout << "b = " <<b << endl;

    return 0;
}