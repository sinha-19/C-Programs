// Program to convert specified days into years, weeks, and days

#include <stdio.h>
int main() {
    int totalDays, years, weeks, days;
    scanf("%d", &totalDays);
    years = totalDays / 365;
    weeks = (totalDays % 365) / 7;
    days = (totalDays % 365) % 7;
    printf("%d years, %d weeks, %d days\n", years, weeks, days);
    return 0;
}

