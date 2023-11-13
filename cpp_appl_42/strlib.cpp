#include "strlib.h"
#include <iostream>

int mystrcmp(const char* str1, const char* str2) {
    int result = 0;
    while (!(result = *str1 - *str2) && *str2)
        ++str1, ++str2;
    if (result < 0) {
        result = -1;
    }
    else if (result > 0) {
        result = 1;
    }
    return result;
}

int StringToNumber(char* str) {
    int result = 0;
    while (*str) {
        result = result * 10 + (*str - '0');
        ++str;
    }
    return result;
}

char* NumberToString(int number) {
    int length = 1;  // at least for the null terminator
    int temp = number;
    while (temp /= 10) {
        ++length;
    }

    char* result = new char[length];
    char* ptr = result + length - 1;
    *ptr = '\0';

    do {
        *--ptr = '0' + number % 10;
        number /= 10;
    } while (number);

    return result;
}

char* Uppercase(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    return str;
}

char* Lowercase(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    return str;
}

char* mystrrev(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }

    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    return str;
}
