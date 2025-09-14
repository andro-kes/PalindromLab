#include "palindrom.h"
#include <bits/stdc++.h>

bool checkPalindrom(std::string s) {
    // Независимость от регистра
   std::transform(
        s.begin(), 
        s.end(), 
        s.begin(),
        [](unsigned char c) {return std::tolower(c);}
    );

    // Убираем пробелы
    s.erase(
        std::remove_if(s.begin(), 
        s.end(),
        [](unsigned char c) {return std::isspace(c);}),
        s.end()
    );
    std::cout << s << "\n";

    // Осуществляем проверку
    for (int i = 0; i < s.length() / 2; ++i) {
        if (s[i] != s[s.length() - i - 1]) {
            return false;
        }
    }
    return true;
}