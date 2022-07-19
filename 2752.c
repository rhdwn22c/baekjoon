#include <stdio.h>

int main() {
    int abc[3];
    int temp = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &abc[i]);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (abc[i] > abc[j]) {
                temp = abc[i];
                abc[i] = abc[j];
                abc[j] = temp;
            }
        }
    }
    printf("%d %d %d", abc[0], abc[1], abc[2]);

}