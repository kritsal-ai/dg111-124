#include <stdio.h>

int main() {
    char character_name[50];
    int max_hp;
    int attack_power;
    int defense;
    int level;

    printf("=== Create Character ===\n");
    printf("Enter your character name: ");
    scanf("%s", &character_name);

    printf("Enter your max HP: ");
    scanf("%d", &max_hp);

    printf("Enter your attack power: ");
    scanf("%d", &attack_power);

    printf("Enter your defense: ");
    scanf("%d", &defense);

    printf("Enter your level: ");
    scanf("%d", &level);

    printf("\n=== Character Summary ===\n");
    printf("Name    : %s\n", character_name);
    printf("Level   : %d\n", level);
    printf("HP      : %d\n", max_hp);
    printf("ATK     : %d\n", attack_power);
    printf("DEF     : %d\n", defense);
    return 0;
}