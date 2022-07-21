#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n * 2; j++) {
                if (j % 2 == 0) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        else {
            for (int j = 0; j < n * 2; j++) {
                if (j % 2 == 1) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}