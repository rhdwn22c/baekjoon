#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2, n3;
    
    while(1)
    {
        scanf("%d %d %d", &n1, &n2, &n3);
        if(n1 == 0 && n2 == 0 && n3 == 0) break;
        
        n1 = pow(n1, 2), n2 = pow(n2, 2), n3 = pow(n3, 2);
        if(n1 + n2 == n3 || n1 + n3 == n2 || n2 + n3 == n1)
            printf("right\n");
        else printf("wrong\n");
    }
}