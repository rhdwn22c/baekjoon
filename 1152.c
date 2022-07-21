#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000001];
    scanf("%[^\n]", arr);
    int cnt=0;
    if(strlen(arr) == 1 && arr[0] == ' '){
        printf("0");
        return 0;
    }
    for(int i = 1; i < strlen(arr) - 1; i++) {
        if(arr[i] == ' ')
            cnt++;
    }
    printf("%d", cnt+1);
}