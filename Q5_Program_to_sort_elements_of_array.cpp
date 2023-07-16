#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(const std::vector<int> arr, int size) {
    std::cout << "Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr;
    std::cout<<"Enter Size of arr: ";
    int n,a;
    std::cin>>n;
    std::cout<<"Enter elements of arr: ";
    for (int i=0;i<n;i++){
        std::cin>>a;
        arr.push_back(a);
    }

    printArray(arr, arr.size());

    bubbleSort(arr, arr.size());

    printArray(arr, arr.size());

    return 0;
}
