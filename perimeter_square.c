//Write a C program to find the perimeter of a square.

#include <stdio.h>
int main() {
    float side, perimeter;
    printf("Enter side length of square: ");
    scanf("%f", &side);
    perimeter = 4 * side;
    printf("Perimeter of square: %.2f\n", perimeter);
    return 0;
}

