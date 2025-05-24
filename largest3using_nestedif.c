//Write a C program to find the largest among three numbers using nested if.

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        if (a > c)
            printf("Largest: %d\n", a);
        else
            printf("Largest: %d\n", c);
    } else {
        if (b > c)
            printf("Largest: %d\n", b);
        else
            printf("Largest: %d\n", c);
    }
    return 0;
}

