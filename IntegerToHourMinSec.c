// Program to convert given integer (seconds) into hours, minutes, and seconds

#include <stdio.h>
int main() {
    int totalSeconds, hours, minutes, seconds;
    scanf("%d", &totalSeconds);
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = (totalSeconds % 3600) % 60;
    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
    return 0;
}

