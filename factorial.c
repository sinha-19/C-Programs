// Q: Write a C program to find the factorial of a given number.

#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %lld\n", fact);
    return 0;
}

