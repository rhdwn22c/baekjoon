#include <stdio.h>

int main() {
    int a, b, v, s;
    scanf("%d %d %d", &a, &b, &v);

    s = (v - b - 1) / (a - b) + 1;
    
    printf("%d", s);
}