#include <stdio.h>

int main() {
    int fi = 0, bo = 1;
    int temp = 0;
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        temp = 0;
        temp = fi + bo;
        if(i % 2 == 0) {
            fi = temp;
        }
        else(i % 2 == 1) {
            bo = temp;
        }
    }
    printf("%d", temp);

}