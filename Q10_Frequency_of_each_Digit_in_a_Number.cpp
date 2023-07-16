#include <iostream>

void findDigitFrequency(long long int number) {
    int frequency[10] = {0};

    while (number != 0) {
        int digit = number % 10;
        frequency[digit]++;
        number /= 10;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << "The frequency of " << i << " = " << frequency[i] << std::endl;
    }
}

int main() {
    long long int number;

    std::cout << "Input any number: ";
    std::cin >> number;

    findDigitFrequency(number);

    return 0;
}