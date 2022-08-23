#include<stdio.h>

void sort(int a[], int n) 
{
	int i, j, m, t;
	for (i = 0; i < n; i++)
	{
		m = i;
		for (j = i; j < n; j++)
		{
			if (a[m] > a[j])
			{
				m = j;
			}
		}

		t = a[i];
		a[i] = a[m];
		a[m] = t;

	}
}
int main(void)
{
	int n;
	int a[51];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a, n);

	printf("%d", a[0] * a[n - 1]);
}