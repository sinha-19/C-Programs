//Write a C program to calculate the square and cube of a number.

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square: %d, Cube: %d\n", num * num, num * num * num);
    return 0;
}

