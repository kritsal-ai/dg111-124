#include <stdio.h>

int main() {
    int secs, minutes, hours;
    printf("Enter time in seconds: ");
    scanf("%d", &secs);
    hours = secs / 3600;
    minutes = (secs % 3600) / 60;
    secs = secs % 60;
    printf("Time: %d:%d:%d\n", hours, minutes, secs);
    return 0;
}