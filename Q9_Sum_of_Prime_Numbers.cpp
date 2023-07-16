#include <iostream>
#include <vector>
//Alternative approach we can use sieve of eratosthenes(as it takes less time.)
bool isPrime(int number) {                          //checks if a number is prime 
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int sumOfPrimeNumbers(int count) {
    std::vector<int> primeNumbers;
    int number = 2;
    int sum = 0;

    while (primeNumbers.size() < count) {
        if (isPrime(number)) {
            primeNumbers.push_back(number);
            sum += number;
        }
        number++;
    }

    return sum;
}

int main() {
    int count;

    std::cout << "Enter the number of prime numbers to compute the sum: ";
    std::cin >> count;

    int sum = sumOfPrimeNumbers(count);

    std::cout << "Sum of the first " << count << " prime numbers: " << sum << std::endl;

    return 0;
}
