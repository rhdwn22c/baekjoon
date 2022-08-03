#include <stdio.h>

int main() {
    int n, x;
    int sequence;
    scanf("%d %d", &n, &x);

    for(int i = 0; i < n; i++) {
        scanf("%d", &sequence);
        if(sequence < x) { 
            printf("%d ", sequence);
        }
    }
}