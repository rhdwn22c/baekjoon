#include <stdio.h>

int main() {
    int arr[10];
    int cnt = 0, input = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        arr[i] = input % 42;
    }
    for (int i = 0; i < 10; i++) {
        int temp = 0;
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                temp++;
            }
        }
        if (temp == 0) {
            cnt++;
        }

    }
    printf("%d", cnt);
}   