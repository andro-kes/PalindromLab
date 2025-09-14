#include "palindrom.h"
#include <string>
#include <algorithm>
#include <cctype>

bool checkPalindrom(std::string s) {
    // Нижний регистр
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    // Удаляем пробелы
    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
    
    if (s.empty()) {
        return true;
    }
    
    size_t left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++, right--;
    }
    
    return true;
}