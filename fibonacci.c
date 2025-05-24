// Q: Write a C program to print the Fibonacci sequence up to N terms.

#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}

