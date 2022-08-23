#include <stdio.h>
#include <math.h>

int arith_mean(int *arr, int N);
int median(int *counting, int N);
int mode(int *counting, int N);
int range(int *counting, int N);

int main()
{
    int N;
    scanf("%d", &N);

    int arr[1000000];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    //정렬(카운팅 정렬)
    int counting[8001]; // 0~8000이 -4000~+4000을 의미
    for (int i = 0; i < 8001; i++)
    {
        counting[i] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        counting[arr[i] + 4000]++; // 0~8000 -> -4000~4000
    }

    //각 통계값 출력
    printf("%d\n", arith_mean(arr, N));
    printf("%d\n", median(counting, N));
    printf("%d\n", mode(counting, N));
    printf("%d\n", range(counting, N));
}

int arith_mean(int *arr, int N)
{ //산술 평균
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    return (int)round(sum / N);
}

int median(int *counting, int N)
{ //중앙값
    // N은 홀수: (N+1)/2 번째 수가 중앙값
    int num = 0;
    for (int i = 0; i < 8001; i++)
    {
        num += counting[i];
        if (num >= (N + 1) / 2)
        {
            return i - 4000;
        }
    }
    return 0;
}

int mode(int *counting, int N)
{ //최빈값
    // counting 값이 가장 큰 값
    int max = 0;  //가장 높은 빈도
    int num = 0;  //최빈값의 개수
    int mode = 0; //최빈값
    for (int i = 0; i < 8001; i++)
    {
        if (counting[i] > max)
        {
            max = counting[i];
            num = 1;
            mode = i - 4000;
        }
        else if (counting[i] == max)
        {
            if (num == 1)
            {
                num++;
                mode = i - 4000;
            }
            else
            { //이미 2개 이상의 최빈값
                num++;
            }
        }
    }
    return mode;
}

int range(int *counting, int N)
{ //범위
    int max = 0;
    int min = 0;
    for (int i = 8000; i >= 0; i--)
    {
        if (counting[i] != 0)
        {
            max = i;
            break;
        }
    }
    for (int i = 0; i < 8001; i++)
    {
        if (counting[i] != 0)
        {
            min = i;
            break;
        }
    }
    return max - min;
}