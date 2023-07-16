#include <iostream>
#include <climits>
#include <vector>

void findSmallestElements(const std::vector<int> arr, int size) {
    int smallest = INT_MAX;                  // variable will store smallest number
    int secondSmallest = INT_MAX;           // variable will store second smallest

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX) {
        std::cout << "No second smallest element found." << std::endl;
    } else {
        std::cout << "Smallest element: " << smallest << std::endl;
        std::cout << "Second smallest element: " << secondSmallest << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter The size of Array: ";
    std::cin >> n;
    std::vector<int> arr;
    int a;
    std::cout<<"Enter elements of arr: ";
    for (int i=0;i<n;i++){
        std::cin>>a;
        arr.push_back(a);
    }

    findSmallestElements(arr, arr.size());

    return 0;
}
