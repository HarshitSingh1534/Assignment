#include <iostream>
#include <string>

void sortStringAlphabetically(std::string& str) {
    int n = str.length();

    // Bubble sort algorithm
    // O(n^2)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Swap characters
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Sort the string alphabetically
    sortStringAlphabetically(str);

    std::cout << "Sorted string: " << str << std::endl;

    return 0;
}
