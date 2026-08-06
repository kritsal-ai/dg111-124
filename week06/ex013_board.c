#include <stdio.h>

int main() {
    int row = 3;
    int col = 5;
    int count = 1;
    printf("+---+---+---+---+---+\n");
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            printf("|%d| ", count);
            count++;
        }
        printf("\n");
        printf("+---+---+---+---+---+\n");
    }
    return 0;
}