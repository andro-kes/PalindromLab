#include "palindrom.h"
#include <string>
#include <stdbool.h>

int main() {
    std::string s;
    std::getline(std::cin, s);
    
    std::cout << checkPalindrom(s) << "\n";

    return 0;
}