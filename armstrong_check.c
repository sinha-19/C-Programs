// Q28: Write a C program to check if a number is an Armstrong number.
// An Armstrong number is equal to the sum of its own digits raised to the power of the number of digits.

#include <stdio.h>
#include <math.h>
int main() {
    int num, original, sum = 0, digits = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    temp = num;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while(temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if(sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
    
    return 0;
}

