#include <stdio.h>

int main() {
    long long a;
    int arr[] = {0, 1, 0, 1, 1}; // 순서
    scanf("%lld", &a); // 출력
    
    if(a > 4) {
        if(arr[(a % 5)] == 1) {
            printf("SK");
        }
        else if(arr[(a % 5)] == 0) {
            printf("CY");
        }
    }
    else if(a <= 4) {
        if(arr[a] == 1) {
            printf("SK");
        }
        else if(arr[a] == 0) {
            printf("CY");
        }
    }
    
}