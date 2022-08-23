#include <stdio.h>

int main() {
    int x = 1, y = 1, z = 1, t;
    int a, b, c;
    int cnt = 0;

    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(x % y == y % z == z % x && x <= a && y <= b && z <= c) {
            cnt++;
            x++;
            y++;
            z++;
        }
        printf("%d\n", cnt);
    }
}