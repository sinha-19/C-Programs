//Write a C program to display size (in bytes) of all basic data types.

#include <stdio.h>
int main() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of short: %lu bytes\n", sizeof(short));
    return 0;
}

