#include <stdio.h>

int main() {
    int days;

    printf("Enter day of the week (1-7): ");
    scanf("%d", &days);

    if (days == 1) {
        printf("Monday (Weekday)\n");
    } else if (days == 2) {
        printf("Tuesday (Weekday)\n");
    } else if (days == 3) {
        printf("Wednesday (Weekday)\n");
    } else if (days == 4) {
        printf("Thursday (Weekday)\n");
    } else if (days == 5) {
        printf("Friday (Weekday)\n");
    } else if (days == 6) {
        printf("Saturday (Weekend)\n");
    } else if (days == 7) {
        printf("Sunday (Weekend)\n");
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}