#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int battery = 0;
    int min = 2;
    scanf_s("%d", &n);
    int temp[1000];
    
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &temp[i]);
        if (temp[i] != temp[i - 1]) {
            battery = min;
            min += 2;
        }
        if(temp[i] == temp[i - 1]) {
            battery += min;
            min *= 2;
        }
        if (battery >= 100) {
            battery = 0;
            min = 0;
        }
    }
    printf("%d", battery);
}