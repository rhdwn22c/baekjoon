#include <stdio.h>

int main() {
    int arr[50][50];
    int r1 = 0, r2 = 0, c1 = 0, c2 = 0, m = 0, s = 0;
    
    scanf("%d %d %d %d", &r1, &r2, &c1, &c2);
    for(int i = r1; i <= r2; i++) {
        for(int j = c1; j <= c2; j++) {
            int x = i - r1;
            int y = j - c1;
            if(i - j < 0) {
                if(i + j < 0) {
                    arr[x][y] = 4 * i * i + i + 1 - j;
                }
                else {
                    arr[x][y] = 4 * j * j - 3 * j + 1 - i;
                }
            }
            else {
                if(i + j < 0) {
                    arr[x][y] = 4 * j * j - j + 1 + i;
                }
                else {
                    arr[x][y] = 4 * j * j + 3 * j + 1 + i;
                }
            }
            if(arr[x][y] > m) {
                m = arr[x][y];
            }
        }
    }
    for(;m;m /= 10) {
        s++;
    }
    for(int i = 0; i <= r2 - r1; i++) {
        for(int j = 0; j <= c2 - c1; j++) {
            printf("%*d ", s, arr[i][j]);
        }
        printf("\n");
    }
}