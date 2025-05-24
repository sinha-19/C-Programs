//Write a C program to find the volume of a cube.

#include <stdio.h>
int main() {
    float side, volume;
    printf("Enter side of cube: ");
    scanf("%f", &side);
    volume = side * side * side;
    printf("Volume of cube: %.2f\n", volume);
    return 0;
}

