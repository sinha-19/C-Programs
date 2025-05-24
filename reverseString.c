// Q: Write a C program to reverse a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if(str[len - 1] == '\n') str[--len] = '\0';
    for(int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}

