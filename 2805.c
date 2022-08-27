#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i;
    int* tList;
    long long lef, mid, rig, sum, max, cMax;

    scanf("%d %d", &n, &m);
    tList = (int*)malloc(n * sizeof(int));

    for (i = 0, max = 0; i < n; i++) {
        scanf(" %d", &tList[i]);

        if (max < tList[i]) {
            max = tList[i];
        }
    }

    lef = 1, rig = max, cMax = 0;
    while (lef <= rig) {
        mid = (lef + rig) / 2;

        for (i = 0, sum = 0; i < n; i++) {
            if (tList[i] - mid > 0)
            {
                sum = sum + (tList[i] - mid);
            }
        }

        
        if (sum < m) {
            rig = mid - 1;
        }
        else {
            if (cMax < mid)
            {
                cMax = mid;
            }
            lef = mid + 1;
        }
    }

    printf("%lld\n", cMax);

    free(tList);
}