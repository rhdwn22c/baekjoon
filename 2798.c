#include <stdio.h>

int main() {
    int n, m;
    int sum, max = 0;
    int arr[100] = { 0, };

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                sum = arr[i] + arr[j] + arr[k];
                if(sum > max && sum <= m) {
                    max = sum;
                }
            }
        }
    }
    printf("%d", max);
}