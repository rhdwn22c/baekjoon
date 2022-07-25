#include <stdio.h>

int main() {
    int num, sum = 1;
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 3; i++) {
        scanf("%d", &num);
        sum *= num;
    }
    for(int i = 0; sum > 0; i++) {
        num = sum % 10;
        arr[num] += 1;
        sum /= 10;
    }
    for(int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
}