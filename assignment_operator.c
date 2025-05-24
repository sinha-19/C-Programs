//Write a C program to demonstrate assignment operators.

#include <stdio.h>
int main() {
    int a = 5;
    printf("Initial a = %d\n", a);
    a += 2;  // a = a + 2
    printf("a += 2 => %d\n", a);
    a *= 3;  // a = a * 3
    printf("a *= 3 => %d\n", a);
    a -= 4;  // a = a - 4
    printf("a -= 4 => %d\n", a);
    return 0;
}

