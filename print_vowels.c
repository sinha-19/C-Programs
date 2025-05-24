//Write a C program to print all vowels present in a given string.

#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Vowels: ");
    for(int i = 0; str[i]; i++) {
        char c = tolower(str[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            printf("%c ", str[i]);
    }
    return 0;
}

