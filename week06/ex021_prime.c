#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is NOT a Prime Number.\n", n);
        } else {
            int is_prime = 1;
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    is_prime = 0;
                    break;
            }
        }
        if (is_prime) {
            printf("%d is a Prime Number.\n", n);
        } else {
            printf("%d is NOT a Prime Number.\n", n);
        }  
    }
    return 0;
}