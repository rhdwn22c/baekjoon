#include <stdio.h>

int main() {
	int cnt, a, b;
	int arr[100];
 
	scanf("%d", &cnt);
 
	for (int i = 0; i < cnt; i++)
	{
		scanf("%d %d", &a, &b);
		int ans = 1;
		int fr = 0;
		int max = 0;
		for (int j = 0; j < a; j++)
			scanf("%d", &arr[j]);
 
		while (1) 
		{
			for (int k = 0; k < a; k++) {
				if (arr[k] > max) max = arr[k];
			}
 
			while (arr[fr] != max)
				fr = (fr + 1) % a;
 
			if (fr == b) break;
 
			arr[fr] = 0;
			fr = (fr + 1) % a;
			max = 0;
			ans++;
		}
		printf("%d\n", ans);
	}
}