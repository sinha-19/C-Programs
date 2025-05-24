//Write a C program to find the area of a square.

#include <stdio.h>
int main() {
    float side, area;
    printf("Enter side length of square: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of square: %.2f\n", area);
    return 0;
}

