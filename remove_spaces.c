//Write a C program to remove all spaces from a string.

#include <stdio.h>
int main() {
    char str[100], result[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("String without spaces: %s\n", result);
    return 0;
}

