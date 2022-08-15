#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char result[100000 * 2];
int stack[100000];
int top = -1;
 
int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int num = 1;
    int idx = 0, result_idx = 0;

    while (1) {
        if (top == -1 || stack[top] < arr[idx]) {
            stack[++top] = num++;
            result[result_idx++] = '+';
        }
        else if (stack[top] == arr[idx]) {
            top--;
            result[result_idx++] = '-';
            idx++;
        }
        else {
            printf("NO\n");
            return 0;
        }
        if (result_idx == n * 2) break;
    }

    for (int i = 0; i < result_idx; i++)
        printf("%c\n", result[i]);
 
}
