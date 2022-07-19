#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a % 2 == 1) {
        printf("SK");
    }
    if(a % 2 == 0) {
        printf("CY");
    }
}