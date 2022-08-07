#include <stdio.h>

int rev(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n) {
        int temp = rev(n);
        if (temp == n) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
        scanf("%d", &n);
    }
}