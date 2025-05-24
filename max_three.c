//Write a C program to find the maximum of three numbers.

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("Maximum is: %d\n", max);
    return 0;
}

