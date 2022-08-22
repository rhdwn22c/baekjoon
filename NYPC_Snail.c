#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000

int arr[SIZE][SIZE];
int aX[SIZE], aY[SIZE], bX[SIZE], bY[SIZE];

int main()
{
	int i, j, k, l, n, t, a, b;
	int num = 1, x = 0, y = 0, sign = 1;


	scanf("%d", &t);

	for (i = 0; i < t; i++)
	{
		sign = 1;
		num = 1;
		x = 0, y = 0;
		scanf("%d %d %d", &n, &a, &b);
		for (l = 0; l < n; ++l)
		{
			arr[x][y] = num++;
			y += sign;
		}
		x -= 1;
		for (j = n - 1; j > 0; --j)
		{
			for (k = 0; k < j; ++k)
			{
				x += sign;
					arr[x][y] = num++;
			}
			sign *= -1;
			for (l = 0; l < j; ++l)
			{
				y += sign;
				arr[x][y] = num++;
			}
		}
		for (j = 0; j < n; j++) {
			for (k = 0; k < n; k++) {
				if (arr[k][j] == a) { // 0, 0
					aX[i] = k; // 0
					aY[i] = j; // 0
				}
				if (arr[k][j] == b) { // 1, 1
					bX[i] = k; // 1
					bY[i] = j; // 1
				}
			}
		}
	}


	for (i = 0; i < t; i++) {
		if (abs(aX[i] - bX[i]) == abs(aY[i] - bY[i])) {
			printf("%d %d %d %d\n", aX[i],  bX[i], aY[i],  bY[i]);
		}
		else printf("%d %d %d %d\n", aX[i],  bX[i], aY[i],  bY[i]);
	}
	return 0;
}