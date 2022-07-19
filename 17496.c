#include <stdio.h>

int main() {
    int N, T, C, P;
    int starfruits = 0;
    scanf("%d%d%d%d", &N, &T, &C, &P);

    for(int i = 1; ; i++) {
        if(1 + T * i > N) {
            break;
        }
        else {
            starfruits = i * C;
        }
    }
    printf("%d", starfruits * P);

}