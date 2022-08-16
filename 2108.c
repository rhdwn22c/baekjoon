#include <stdio.h>
#include <stdlib.h>

int arr[500001];
int count[8001];

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}

int maxFinder(int arr[], int size_arr)
{
    int max = arr[0];
    int i = 0;
    while (i < size_arr)
    {
        if (max < arr[i])
            max = arr[i];
        i++;
    }
    return max;
}

int main()
{
    int i, n;
    int sum = 0, mode = 0, flag = 0;
    scanf("%d", &n);
    i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        count[arr[i] + 4000]++;
        i++;
    }
    i = 0;
    while (i < 8001)
    {
        if (maxFinder(count, 8001) == count[i])
        {
            flag++;
        }
        i++;
    }
    i = 0;
    while (i < 8001)
    {
        if (flag == 1)
        {
            if (maxFinder(count, 8001) == count[i])
            {
                mode = i - 4000;
                break;
            }
        }
        else
        {
            if (maxFinder(count, 8001) == count[i])
            {
                if (flag == 0)
                {
                    mode = i - 4000;
                    break;
                }
                else
                    flag = 0;
            }
        }
        i++;
    }
    qsort(arr, n, sizeof(int), compare);
    printf("%.0f\n", sum / (double)n);
    printf("%d\n", arr[n / 2]);
    printf("%d\n", mode);
    printf("%d\n", arr[n - 1] - arr[0]);
}