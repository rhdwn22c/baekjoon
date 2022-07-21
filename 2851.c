#include <stdio.h>
#include <math.h>

int main() {
    int arr[10];
    int score = 0;

    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
            if (abs(score + arr[i] - 100) <= abs(score - 100)) {
                score += arr[i];
            }
            else {
                break;
            }
    }
    printf("%d", score);
}