#include <stdio.h>

int main() {
    int t, a, b;

    scanf("%d", &t);

    int arr[1000000];
    
    for(int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        arr[i] = a + b;
    }
    for(int i = 0; i < t; i++) {
        printf("%d\n", arr[i]);
    }
}