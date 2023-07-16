#include <iostream>

int reverseNumber(int number) {
    int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return reversedNumber;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int reversedNumber = reverseNumber(number);

    std::cout << "Reversed number: " << reversedNumber << std::endl;

    return 0;
}