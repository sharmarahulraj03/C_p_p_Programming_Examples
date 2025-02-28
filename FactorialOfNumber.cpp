//Create a program to print factorial of number given by user
#include <iostream>

long long factorial(int num) {
    if (num <= 1) return 1;
    return num * factorial(num - 1);
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Factorial of " << number << " is " << factorial(number) << std::endl;

    return 0;
}
