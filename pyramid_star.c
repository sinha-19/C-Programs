//Write a C program to print a pyramid pattern of stars.

#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            printf(" ");
        for (int star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }
    return 0;
}

