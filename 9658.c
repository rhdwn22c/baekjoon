#include <stdio.h>

int main() {
    int a;
    int arr[] = {1, 0, 1, 0, 1, 1, 1}; // 순서
    scanf("%d", &a); // 출력
    
    if(a <= 6) {
        if(arr[a] == 1) {
            printf("SK");
        }
        else {
            printf("CY");
        }
    }

    else {
        if(arr[a % 7] == 1) {
            printf("SK");
        }
        else{
            printf("CY");
        }
    }
    
    
}