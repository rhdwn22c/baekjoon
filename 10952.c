#include <stdio.h>

int main(){
    int a, b;

    for(int i = 0; ; i++) {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) {
            return 0;
        }
        printf("%d\n", a + b);
    }
}