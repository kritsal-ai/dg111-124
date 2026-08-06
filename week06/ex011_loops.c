#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("For loop sum = %d\n", sum);
    int o = 1;
    sum = 0;
    while (o <= 10) {
        sum += o;
        o++;
    }
    printf("While loop sum = %d\n", sum);
    int p = 1;
    sum = 0;
    do {
        sum += p;
        p++;
    } while (p <= 10);
    printf("Do-while loop sum = %d\n", sum);
    return 0;
}