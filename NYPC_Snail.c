#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000

int arr[SIZE][SIZE];
int aX[SIZE], aY[SIZE], bX[SIZE], bY[SIZE];

int main()
{
	int i, j, k, l, n, t, a, b;
	int num = 1, x = 0, y = 0, sign = 1;


	scanf_s("%d", &t);

	for (i = 0; i < t; i++)
	{
		sign = 1;
		num = 1;
		x = 0, y = 0;
		scanf_s("%d %d %d", &n, &a, &b);
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
				if (arr[j][k] == a) {
					aX[j] = j;
					aY[j] = k;
				}
				if (arr[j][k] == b) {
					bX[j] = j;
					bY[j] = k;
				}
			}
		}
	}


	for (i = 0; i < n; i++) {
		if (abs(aX - bX) == abs(aY - bY)) {
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}