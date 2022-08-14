#include <stdio.h>

int main(){
    int a;
    int n, temp, cnt = 0;

    scanf("%d", &a);

    for(int i = 0; i < a; i++) {
        scanf("%d", &n);
        temp = 0;

        if(n == 1) {
            continue;
        }
        for(int j = 2; j < n; j++) {
            if(n % j == 0) {
                temp = 1;
            }
            if(temp == 0) {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
}