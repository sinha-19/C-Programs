//Write a C program to calculate x raised to the power y (x^y) without using pow().

#include <stdio.h>
int main() {
    int x, y, result = 1;
    printf("Enter base (x) and exponent (y): ");
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    printf("%d raised to the power %d is %d\n", x, y, result);
    return 0;
}

