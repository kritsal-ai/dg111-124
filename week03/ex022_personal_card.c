#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int age;
    float GPA;
    char major[50];

    printf("===Enter Data===\n");
    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &GPA);

    printf("Enter your Favorite subject: ");
    scanf("%49s", major);

    char line1[100], line2[100], line3[100], line4[100];

    sprintf(line1, "Name  : %s", name);
    sprintf(line2, "Age   : %d", age);
    sprintf(line3, "GPA   : %.2f", GPA);
    sprintf(line4, "Major : %s", major);

    // Find the longest line
    int width = strlen(line1);

    if (strlen(line2) > width) width = strlen(line2);
    if (strlen(line3) > width) width = strlen(line3);
    if (strlen(line4) > width) width = strlen(line4);

    printf("=== PERSONAL CARD ===\n");

    // Top border
    printf("┌");
    for (int i = 0; i < width + 2; i++)
        printf("─");
    printf("┐\n");

    // Contents
    printf("│ %-*s │\n", width, line1);
    printf("│ %-*s │\n", width, line2);
    printf("│ %-*s │\n", width, line3);
    printf("│ %-*s │\n", width, line4);

    // Bottom border
    printf("└");
    for (int i = 0; i < width + 2; i++)
        printf("─");
    printf("┘\n");

    return 0;
}