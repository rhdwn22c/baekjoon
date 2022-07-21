#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int k = a - 1; k >= i; k--) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}