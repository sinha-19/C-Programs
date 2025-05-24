//Write a C program to convert a lowercase string to uppercase.

#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    printf("Enter a lowercase string: ");
    scanf("%s", str);
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
    printf("Uppercase string: %s\n", str);
    return 0;
}

