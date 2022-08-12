#include <stdio.h>

int main(){
    int a, b;
    int arr[1000001] = { 0, 1, };
    
    scanf("%d %d", &a, &b);
    
    for(int i = 2; i <= b; i++){
        for(int j = 2; i * j <= b; j++){
            arr[i*j] = 1;
        }
    }
    
    for(int i = a; i <= b; i++){
        if(arr[i] == 0)
            printf("%d\n",i);
    }
}