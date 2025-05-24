//Write a C program to demonstrate increment and decrement operators.

#include <stdio.h>
int main() {
    int a = 10;
    printf("a = %d\n", a);
    printf("a++ = %d\n", a++); // Post-increment
    printf("Now a = %d\n", a);
    printf("++a = %d\n", ++a); // Pre-increment
    printf("a-- = %d\n", a--); // Post-decrement
    printf("Now a = %d\n", a);
    printf("--a = %d\n", --a); // Pre-decrement
    return 0;
}

