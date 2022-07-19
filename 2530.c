#include <stdio.h>

int main() {
    int nowHour, nowMinute, nowSecond, cookSecond;

    scanf("%d %d %d", &nowHour, &nowMinute, &nowSecond);
    scanf("%d", &cookSecond);

    nowSecond += cookSecond;

    while (1) {
        if (nowSecond >= 60) {
            nowMinute++;
            nowSecond -= 60;
        }

        if (nowHour == 24) {
            nowHour = 0;
        }

        if (nowMinute >= 60) {
            nowHour++;
            nowMinute -= 60;
        }

        if(nowSecond < 60 && nowHour != 24 && nowMinute < 60) {
            break;
        }
    }
    printf("%d %d %d", nowHour, nowMinute, nowSecond);
}