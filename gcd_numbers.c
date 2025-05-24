// Write a C program to find the GCD (Greatest Common Divisor) of two numbers using Euclid's algorithm.

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD is %d\n", a);
    return 0;
}

