#include "palindrom.h"
#include <iostream>
#include <string>

int main() {
    std::string input;
    
    std::cout << "Ввод: ";
    std::getline(std::cin, input);
    
    bool result = checkPalindrom(input);
    
    if (result) {
        std::cout << "Палиндром" << "\n";
    } else {
        std::cout << "Не палиндром" << "\n";
    }
    
    return 0;
}

// ./palindrom_checker
// ./test_palindrom