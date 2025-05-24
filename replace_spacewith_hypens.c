//Write a C program to replace all spaces in a string with hyphens.

#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Reads string with spaces
    for(int i = 0; str[i]; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }
    printf("Modified string: %s\n", str);
    return 0;
}

