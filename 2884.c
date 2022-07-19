#include <stdio.h>

int main() {
    int nowHour, nowMinute;

    scanf("%d %d", &nowHour, &nowMinute);

    nowMinute -= 45;

    while (1) {
        if (nowMinute < 0) {
            nowHour--;
            nowMinute += 60;
        }

        if (nowHour == -1) {
            nowHour = 23;
        }

        if (nowMinute >= 0) {
            break;
        }
    }
    printf("%d %d", nowHour, nowMinute);
}