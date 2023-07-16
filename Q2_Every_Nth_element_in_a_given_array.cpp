#include <iostream>
#include <vector>

template<typename T>
std::vector<T> getNthElements(const std::vector<T>& arr, int n) {
    std::vector<T> result;

    try {
        if (n <= 0 || n > arr.size()) {
            throw std::out_of_range("Invalid value of n");
        }

        for (size_t i = n - 1; i < arr.size(); i += n) {
            result.push_back(arr[i]);
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        
    }

    return result;
}

int main() {

    std::vector<int> numbers;
    int s,a,n;
    std::cout << "Enter the size of array: ";
    std::cin >> s;
    std::cout << "Enter elements of arr: ";
    for (int i=0;i<s;i++){
        std::cin >> a;
        numbers.push_back(a);
    }
    std::cout << "Enter n: ";
    std::cin >> n;
    std::vector<int> result = getNthElements(numbers, n);

    std::cout << "Every " << n << "th element in the array: ";
    for (const auto& element : result) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
