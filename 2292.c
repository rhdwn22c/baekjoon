#include <stdio.h>

int main() {
    int a, b = 1;
    int cnt = 1;

    scanf("%d", &a);

    for (int i = 1; ; i++) {
        if (a > b) {
            b += 6 * i;
            cnt++;
        }
        else {
            break;
        }
    }
    printf("%d", cnt);
}