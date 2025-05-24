//Write a C program to demonstrate ternary operator for finding max of two numbers.

#include <stdio.h>
int main() {
    int a = 10, b = 20;
    int max = (a > b) ? a : b;
    printf("Maximum = %d\n", max);
    return 0;
}

