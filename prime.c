// Q: Write a C program to check if a number is prime or not.

#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n < 2) isPrime = 0;
    for(i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if(isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}

