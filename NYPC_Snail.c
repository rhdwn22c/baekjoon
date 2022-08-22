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

	for (i = 0; i < t; ++i)
	{
		sign = 1;
		num = 1;
		x = 0, y = 0;
		scanf("%d %d %d", &n, &a, &b);
		for (l = 0; l < n; ++l)
		{
			arr[y][x] = num++;
			x += sign;
		}
		x -= 1;
		for (j = n - 1; j > 0; --j)
		{
			for (k = 0; k < j; ++k)
			{
				y += sign;
				arr[y][x] = num++;
			}
			sign *= -1;
			for (l = 0; l < j; ++l)
			{
				x += sign;
				arr[y][x] = num++;
			}
		}
		for (j = 0; j < n; ++j) {
			for (k = 0; k < n; ++k) {
				if (arr[j][k] == a) { // 0, 0
					aX[i] = j; // 0
					aY[i] = k; // 0
				}
				if (arr[j][k] == b) { // 1, 1
					bX[i] = j; // 1
					bY[i] = k; // 1
				}
			}
		}
		/*for (int j = 0; i < n; ++i) {
			for (int k = 0; k < n; ++k) {
				printf("%d ", arr[j][k]);
			}
			printf("\n");
		}*/
	}




	for (i = 0; i < t; ++i) {
		if (abs(aX[i] - bX[i]) == abs(aY[i] - bY[i])) {
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}