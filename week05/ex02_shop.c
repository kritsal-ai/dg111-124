#include <stdio.h>
#include <stdbool.h>

int main() {
    int gold = 1000;
    int choice1, choice2 = 0;
    bool boughtSword = false;
    bool boughtArmor = false;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n\n", gold);

    printf("1. Health Potion  -  50 Gold  (+50 HP)\n");
    printf("2. Mana Potion    -  80 Gold  (+30 MP)\n");
    printf("3. Iron Sword     - 500 Gold  (+20 ATK)\n");
    printf("4. Leather Armor  - 300 Gold  (+15 DEF)\n");
    printf("5. Exit\n\n");

    printf("Select first item: ");
    scanf("%d", &choice1);

    if (choice1 == 5) {
        printf("Exit\n");
        return 0;
    }

    printf("Select second item: ");
    scanf("%d", &choice2);

    if (choice1 == 3 || choice2 == 3)
        boughtSword = true;
    if (choice1 == 4 || choice2 == 4)
        boughtArmor = true;
    if (boughtSword && boughtArmor) {
        int price = (500 + 300) * 90 / 100;

        if (gold >= price) {
            gold -= price;

            printf("\n=== Purchase ===\n");
            printf("Warrior Bundle!\n");
            printf("Iron Sword + Leather Armor\n");
            printf("Price Paid : %d Gold\n", price);
            printf("Remaining  : %d Gold\n", gold);
            printf("ATK Bonus  : +20\n");
            printf("DEF Bonus  : +15\n");
        } else {
            printf("\nNot enough Gold!\n");
        }
    }
    else {
        switch (choice1) {
            case 1:
                if (gold >= 50) {
                    gold -= 50;
                    printf("\nHealth Potion purchased!\n");
                    printf("Remaining : %d Gold\n", gold);
                    printf("HP Bonus  : +50\n");
                } else
                    printf("\nNot enough Gold!\n");
                break;

            case 2:
                if (gold >= 80) {
                    gold -= 80;
                    printf("\nMana Potion purchased!\n");
                    printf("Remaining : %d Gold\n", gold);
                    printf("MP Bonus  : +30\n");
                } else
                    printf("\nNot enough Gold!\n");
                break;

            case 3:
                if (gold >= 500) {
                    gold -= 500;
                    printf("\nIron Sword purchased!\n");
                    printf("Remaining : %d Gold\n", gold);
                    printf("ATK Bonus : +20\n");
                } else
                    printf("\nNot enough Gold!\n");
                break;

            case 4:
                if (gold >= 300) {
                    gold -= 300;
                    printf("\nLeather Armor purchased!\n");
                    printf("Remaining : %d Gold\n", gold);
                    printf("DEF Bonus : +15\n");
                } else
                    printf("\nNot enough Gold!\n");
                break;

            default:
                printf("\nInvalid!\n");
        }
    }

    printf("Item purchased successfully! ✓\n");

    return 0;
}