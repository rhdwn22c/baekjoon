#include <stdio.h>

int main()
{
    int n, front = 0, rear;
    int que[500000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        que[i] = i + 1;
    rear = n - 1;

    while (1) {
        front = (front + 1) % n;
        if (rear == front)
            break; 

        rear = (rear + 1) % n;
        que[rear] = que[front];
        front = (front + 1) % n;

        if (rear == front)
            break; 
    }
    printf("%d", que[rear]);
}