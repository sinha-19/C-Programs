// Q: Write a C program to check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if(str[len - 1] == '\n') str[--len] = '\0';

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}

