#include <stdio.h>
#include <stdbool.h>

int main() {
    int max_hp, damage, attack_count, is_poisoned, hp;
    _Bool is_poisoned_bool;

    printf("Max HP: ");
    scanf("%d", &max_hp);
    printf("Damage Taken: ");
    scanf("%d", &damage);
    printf("Is Poisoned (1 if true, 0 if false): ");
    scanf("%d", &is_poisoned);
    is_poisoned_bool = is_poisoned;

    printf("Attack Count: ");
    scanf("%d", &attack_count);

    hp = max_hp - damage;
    if (hp < 0) hp = 0;

    printf("\n=== Character State ===\n");
    if (hp <= 0) {
        printf("State: DEAD\n");
    } else if (hp * 100 < max_hp * 25) {
        printf("State: CRITICAL\n");
    } else if (is_poisoned_bool) {
        printf("State: POISONED\n");
    }
    else {
        printf("State: NORMAL\n");
    }
    if (attack_count > 0 && attack_count % 5 ==0) {
        printf("Ultimate Ready!\n");
    }
    return 0;
}