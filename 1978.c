#include <stdio.h>

int main(){
    int a;
    int n, cnt = 0;

    scanf("%d", &a);

    for(int i = 0; i < a; i++) {
        scanf("%d", &n);

        for(int j = 2; j <= n; j++) {
            if(n == j) {
                cnt++;
            }
            if(n % j == 0) {
                break;
            }
        }
    }
    printf("%d", cnt);
}