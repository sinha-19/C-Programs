// Q75: Write a C program to calculate simple interest.

#include <stdio.h>
int main() {
    float principal, rate, time, si;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    si = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", si);
    return 0;
}

