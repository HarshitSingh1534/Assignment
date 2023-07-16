#include <iostream>
#include <vector>

int findLargest(std::vector<int>& arr) {
    int largest = arr[0];
    for (int i=1;i<5;i++){
        if (arr[i] > largest) {
        largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int num;
    std::vector<int> numbers;
    std::cout << "Enter five numbers: ";
    for (int i=0;i<5;i++){
        std::cin >> num;
        numbers.push_back(num);
    }

    int largest = findLargest(numbers);

    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}
