#include <iostream>
#include <string>

void capitalizeFirstLetter(std::string& str) {
    bool newWord = true;

    for (char& c : str) {
        if (c >= 'a' && c <= 'z') {
            if (newWord) {
                c = c - 'a' + 'A';
                newWord = false;
            }
        }
        else if (c >= 'A' && c <= 'Z') {
            if (newWord) {
                newWord = false;
            }
        }
        else {
            newWord = true;
        }
    }
}

int main() {
    std::string sentence;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    capitalizeFirstLetter(sentence);

    std::cout << "Updated sentence: " << sentence << std::endl;

    return 0;
}
