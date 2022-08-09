#include <stdio.h>
#include <stdlib.h>

int main() {
    long long k, n;
	long long low = 1;
	long long high = -1, middle;
	long long line[10001] = { 0, };
	long res = 0;
	long sum = 0;

	scanf("%lld %lld", &k, &n);

	for (long i = 0; i < k; i++) {
		scanf("%lld", &line[i]);
		high = high < line[i] ? line[i] : high;
	}
	while (low <= high) {
		middle = (low + high) / 2;
		sum = 0;
		for (long j = 0; j < k; j++) {
			sum += (line[j] / middle);
		}
		if (sum < n) {
			high = middle - 1;
		}
		else if (sum >= n) {
			low = middle + 1;
			res = res < middle ? middle : res;
		}
	}
	printf("%ld", res);
}