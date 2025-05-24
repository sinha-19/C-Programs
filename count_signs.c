// Q27: Write a C program to count positive, negative, and zero values in an array.

#include <stdio.h>
int main() {
    int n, i, pos = 0, neg = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) pos++;
        else if(arr[i] < 0) neg++;
        else zero++;
    }
    printf("Positive = %d, Negative = %d, Zeros = %d\n", pos, neg, zero);
    return 0;
}

