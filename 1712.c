#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if (b >= c) {
        printf("-1");
    }
    else {
        printf("%d\n", a / (c - b) + 1);
    }
    
}