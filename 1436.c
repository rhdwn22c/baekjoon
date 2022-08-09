#include <stdio.h>
#include <math.h>

int main() {
    int n, index = 0;
    int num = 665;

    scanf("%d", &n);

    while(1) {
        if(index == n) {
            break;
        }
        num++;
        for(int i = 0; i < 10; i++) {
            if(num / (int)pow(10, i) % 1000 == 666) {
                index++;
                break;
            }
        }
    }
    printf("%d\n", num);
}