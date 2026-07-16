#include <stdio.h>
#include <math.h>

int main() {
    int player_attack, enemy_defense, hit_numbers, base_damage, damage;

    printf("Enter player's attack power: ");
    scanf("%d", &player_attack);
    printf("Enter enemy's defense: ");
    scanf("%d", &enemy_defense);
    printf("Enter number of hits: ");
    scanf("%d", &hit_numbers);

    base_damage = player_attack - enemy_defense;

    if (hit_numbers % 5 == 0) {
        damage = (int)ceil((float)base_damage * 1.5f);
        base_damage = damage;
    }

    printf("\n=== COMBAT SIMULATOR ===\n");
    printf("Player Attack    : %d\n", player_attack);
    printf("Enemy Defense    : %d\n", enemy_defense);
    printf("Number of Hits   : %d\n", hit_numbers);
    printf("Damage           : %d\n", base_damage);

    return 0;
}