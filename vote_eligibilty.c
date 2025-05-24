//Write a C program to check if a person is eligible to vote (age >= 18).

#include <stdio.h>
#include <stdbool.h>
int main() {
    int age;
    bool eligible;
    printf("Enter your age: ");
    scanf("%d", &age);
    eligible = (age >= 18);
    if (eligible)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");
    return 0;
}

