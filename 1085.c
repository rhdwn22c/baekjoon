#include <stdio.h>

int main() {
	 
	int x, y, w, h, result;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	result = x;

	if (result > w - x)
		result = w - x;

	if (result > y)
		result = y;

	if (result > h - y)
		result = h - y;

	printf("%d", result);
} 