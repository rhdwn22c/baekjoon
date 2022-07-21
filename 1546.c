#include <stdio.h>

int main()
{
    int subject;
    float score[1000];
    float sum = 0, max = 0;

    scanf("%d", &subject);

    for (int i = 0; i < subject; i++)
    {
        scanf("%d", &score[i]);
        if (max < score[i])
        {
            max = score[i];
        }
    }
    for (int i = 0; i < subject; i++)
    {
        score[i] /= max;
        (float)(score[i] *= 100); // 50 75 100
        sum += (float)score[i];
    }
    printf("%.6f", sum / (float)subject);
}