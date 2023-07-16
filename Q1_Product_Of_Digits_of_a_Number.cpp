#include <iostream>
#include <cstdlib>

int calculateDigitProduct(int number) {
    long long int product = 1;
    while (number!=0){
        product *= (number % 10);
        number /=10;
    }
    return product;    
}

int main() {
    long long int number;
    std::cout << "Please Enter an Integer ";
    std::cin >> number; 
    long long int product = calculateDigitProduct(abs(number));
    std::cout << "Product of digits of " << number << " = " << product << std::endl;
    return 0;
}
