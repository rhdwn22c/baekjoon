#include <stdio.h>

int main() {
    int k, a, d;

    scanf("%d %d %d", &k, &d, &a);

    if (k + a < d || d == 0) {
        printf("hasu");
    }
    else {
        printf("gosu");
    }

}