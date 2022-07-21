#include <stdio.h>
#include <math.h>

int main() {
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += pow(arr[i], 2);
    }
    printf("%d", sum % 10); 

}