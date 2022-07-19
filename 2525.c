#include <stdio.h>?

int main() {
    int nowHour, nowMinute, cookMinute;

    scanf("%d %d", &nowHour, &nowMinute);
    scanf("%d", &cookMinute);

    nowMinute += cookMinute;

    while (1) {
        if(nowHour == 24) {
            nowHour = 0;
        }
        
        if (nowMinute >= 60) {
            nowHour++;
            nowMinute -= 60;
        }
        
        else {
            break;
        }
    }
    printf("%d %d", nowHour, nowMinute);
}