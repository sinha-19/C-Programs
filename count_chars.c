//Write a C program to count digits, letters, and special characters in a string.

#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int digits = 0, letters = 0, special = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    for (int i = 0; str[i]; i++) {
        if (isdigit(str[i]))
            digits++;
        else if (isalpha(str[i]))
            letters++;
        else
            special++;
    }
    printf("Digits: %d, Letters: %d, Special characters: %d\n", digits, letters, special);
    return 0;
}

