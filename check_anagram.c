//Write a C program to check whether two strings are anagrams of each other (case-insensitive).

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str1[100], str2[100];
    int count[26] = {0}, i;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if(strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }
    for(i = 0; str1[i]; i++) count[tolower(str1[i]) - 'a']++;
    for(i = 0; str2[i]; i++) count[tolower(str2[i]) - 'a']--;
    for(i = 0; i < 26; i++) {
        if(count[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }
    printf("Strings are anagrams.\n");
    return 0;
}

