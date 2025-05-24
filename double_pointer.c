//Write a C program to demonstrate pointer to pointer concept.

#include <stdio.h>
int main() {
    int x = 5;
    int *ptr = &x;
    int **pptr = &ptr;
    printf("Value of x = %d\n", x);
    printf("Value via *ptr = %d\n", *ptr);
    printf("Value via **pptr = %d\n", **pptr);
    return 0;
}

