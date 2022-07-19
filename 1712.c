#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    for(int i = 0; ; i++) {
        if(a + b * i < c * i) {
            printf("%d", i);
            break;
        }
        else {
            printf("-1");
            break;
        }
    }
}