#include <stdio.h>

int main() {
    int num;
    int a = 0, b = 0, temp = 0;

    scanf("%d", &num); // 26 % 10 = 

    a = num / 10;
    b = num % 10;

    for (int i = 0; ; i++) {
        temp = a + b;
        a = b;
        b = temp % 10;
        if (num == a * 10 + b) {
            printf("%d", i + 1);
            return 0;
        }
    }
}