#include <stdio.h>

float percentOf(int current, int total);

int main(void)
{
    int currentHP = 35;
    int maxHP = 100;

    float hpPercent = percentOf(currentHP, maxHP);

    printf("HP = %d/%d\n", currentHP, maxHP);
    printf("HP percent = %.2f%%\n", hpPercent);

    return 0;
}

float percentOf(int current, int total)
{
    return (float)current / total * 100.0f;
}