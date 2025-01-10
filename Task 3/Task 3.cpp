#include <iostream>
#include <cstring>

bool substr(const char* str1, const char* str2) {
    if (str1 == nullptr || str2 == nullptr) return false; // Проверка на null

    int len1 = 0, len2 = 0;

    // Определение длины строк
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len2 > len1) return false; // Если вторая строка длиннее первой, это не подстрока

    // Проверка на подстроку
    for (int i = 0; i <= len1 - len2; ++i) {
        bool isSubstring = true;
        for (int j = 0; j < len2; ++j) {
            if (str1[i + j] != str2[j]) {
                isSubstring = false;
                break;
            }
        }
        if (isSubstring) return true;
    }

    return false;
}

int main() {
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";

    std::cout << substr(a, b) << " " << substr(a, c) << std::endl; // true false

    return 0;
}
