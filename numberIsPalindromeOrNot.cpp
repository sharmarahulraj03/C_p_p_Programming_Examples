#include <iostream>

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPalindrome(number)) {
        std::cout << number << " is a palindrome." << std::endl;
    } else {
        std::cout << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
