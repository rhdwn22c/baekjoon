#include <stdio.h>

int Reverse(int num) {
    int hundred = 0, ten = 0, one = 0;

    hundred = num / 100; // 237 / 100 == 2
    ten = num % 100 / 10; // 237 % 100 == 37 / 10
    one = num % 10;

    num = one * 100 + ten * 10 + hundred;

    return num;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    a = Reverse(a);
    b = Reverse(b);

    if (a > b) {
        printf("%d", a);
    }
    else {
        printf("%d", b);
    }

}