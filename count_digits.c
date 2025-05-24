//Write a C program to count the number of digits in a given number.

#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 0) count = 1;
    while(num != 0) {
        num /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}

