//Write a C program to count the number of set bits (1s) in the binary representation of a number.

#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        count += num & 1;
        num >>= 1;
    }
    printf("Number of set bits: %d\n", count);
    return 0;
}

