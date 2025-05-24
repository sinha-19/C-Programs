//Write a C program to demonstrate basic pointer usage and value modification.

#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;
    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("Pointer ptr points to = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);
    *ptr = 20; // Modifying value of x using pointer
    printf("Modified value of x = %d\n", x);
    return 0;
}

