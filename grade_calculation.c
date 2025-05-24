//Write a C program to display grade based on percentage using if-else ladder.

#include <stdio.h>
int main() {
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 80)
        printf("Grade: B\n");
    else if (percentage >= 70)
        printf("Grade: C\n");
    else if (percentage >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
    return 0;
}

