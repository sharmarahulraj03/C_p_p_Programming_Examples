#include <iostream>

int main(){
    int firstNumber, secondNumber, outputNumber;
    std::cout << "Enter the first number you want to add: ";
    std::cin >> firstNumber;
    std::cout << "Enter the second number you want to add: ";
    std::cin >> secondNumber;
    outputNumber = firstNumber + secondNumber;
    std::cout << "The sum of your inputs is: " << outputNumber << std::endl;
    std::cout << "Goodbye! 👋";
    return 0;
}