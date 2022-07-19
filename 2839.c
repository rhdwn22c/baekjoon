#include <stdio.h>

int main() {
	int n;
	int cnt = 0;

	scanf_s("%d", &n);

	for (int i = n / 5; i >= 0; i--) {
		int m = n - i * 5;
		if (m % 3 == 0) {
			printf("%d\n", i + m / 3);
			return 0;
		}
	}
	printf("-1");
}