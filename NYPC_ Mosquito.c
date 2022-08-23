#include <stdio.h>
#include <stdlib.h>

int n, m, ** field;

int cntCross(int x, int y) {
    int cnt = field[y][x];

    for (int i = 1; i <= m; i++) {
        if (y - i >= 0) cnt += field[y - i][x];
        if (y + i < n) cnt += field[y + i][x];
        if (x - i >= 0) cnt += field[y][x - i];
        if (x + i < n) cnt += field[y][x + i];
    }

    return cnt;
}

int cntX(int x, int y) {
    int cnt = field[y][x];

    for (int i = 1; i <= m; i++) {
        if (x - i >= 0 && y - i >= 0) {
            cnt += field[y - i][x - i];
        }
        if (x + i < n && y - i >= 0) {
            cnt += field[y - i][x + i];
        }
        if (x - i >= 0 && y + i < n) {
            cnt += field[y + i][x - i];
        }
        if (x + i < n && y + i < n) cnt += field[y + i][x + i];
    }

    return cnt;
}

int main() {
    int n, m, c;
    int max = 0;

    scanf("%d %d", &n, &m);
    field = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        field = malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &field[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c = cntCross(j, i);
            if (max < c) {
                max = c;
            }
            c = cntX(j, i);
            if (max < c) {
                max = c;
            }
        }
    }
    printf("%d\n", max);

    return 0;
    
}