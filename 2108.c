#include <stdio.h>
#include <stdlib.h>

int num[500000];
int freq[8001];
 
int maxFind(int* arr, int arrSize) {
	int maxFind = arr[0];
	for (int t = 0; t < arrSize; t++) {
		if (maxFind < arr[t]) maxFind = arr[t];
	}
	return maxFind;
}
int compare(const void* a, const void* b) {
	int n = *(int*)a;
	int m = *(int*)b;
	if (n < m) return -1;
	else if (n > m) return 1;
	else return 0;
}
 
int main() {
	int n, i, j;
	int max;
	int lev;
	int sum = 0, temp = 0;
 
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
		freq[num[i] + 4000]++;
	}
	qsort(num, n, sizeof(int), compare);
	
	max = maxFind(freq, 8001);
	for (i = 0; i < 8001; i++) {
		if (max == freq[i]) temp++;
	}
	for (i = 0; i < 8001; i++) {
		if (temp == 1) {
			if (max == freq[i]) {
				lev = i - 4000;
				break;
			}
		}
		else {
			if (max == freq[i])
				if (temp == 0) {
					lev = i - 4000;
					break;
				}
				else temp = 0;
		}
}
 
	printf("%.0f\n", (sum / (double)n));
	printf("%d\n", num[n / 2]);
	printf("%d\n", lev);
	printf("%d\n", num[n - 1] - num[0]);
	return 0;
}
