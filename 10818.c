#include <stdio.h>

int main() {
    int n, numbers, max = -1000001, min = 1000001;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &numbers);
        if(numbers < min) {
            min = numbers;
        }
        if(numbers > max) {
            max = numbers;
        }
    }
    printf("%d %d", min, max);
}