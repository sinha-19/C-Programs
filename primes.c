// Q: Write a C program to print all prime numbers up to a given number N.

#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d:\n", n);
    for(i = 2; i <= n; i++) {
        int isPrime = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}

