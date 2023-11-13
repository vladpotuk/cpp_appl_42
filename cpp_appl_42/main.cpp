#include "strlib.h"
#include <iostream>

int main() {
    int choice;
    const char* str1 = "Hello";
    const char* str2 = "World";
    char numStr[] = "123";
    int num;
    char* strNum;
    char mixedCase[] = "MiXeDcAsE";
    char revStr[] = "Reverse";

    std::cout << "Choose an option:\n"
        << "1. mystrcmp\n"
        << "2. StringToNumber\n"
        << "3. NumberToString\n"
        << "4. Uppercase\n"
        << "5. Lowercase\n"
        << "6. mystrrev\n";

    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "mystrcmp result: " << mystrcmp(str1, str2) << std::endl;
        break;
    case 2:
        num = StringToNumber(numStr);
        std::cout << "StringToNumber result: " << num << std::endl;
        break;
    case 3:
        strNum = NumberToString(456);
        std::cout << "NumberToString result: " << strNum << std::endl;
        delete[] strNum;
        break;
    case 4:
        std::cout << "Uppercase result: " << Uppercase(mixedCase) << std::endl;
        break;
    case 5:
        std::cout << "Lowercase result: " << Lowercase(mixedCase) << std::endl;
        break;
    case 6:
        std::cout << "mystrrev result: " << mystrrev(revStr) << std::endl;
        break;
    default:
        std::cout << "Invalid choice" << std::endl;
        break;
    }

    return 0;
}
