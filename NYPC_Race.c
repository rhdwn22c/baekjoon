#include <stdio.h>
#include <stdlib.h>

typedef struct logFile {
	int time;
	int user;
	int race;
}logFile;

int main() {
    int i, j;
	int uNum, logNum;
	scanf("%d %d", &uNum, &logNum);
	logFile* scanLog = (logFile*)malloc(sizeof(logFile) * logNum);
	int* uArr = (int*)calloc(uNum, sizeof(int));
	int* uStatus = (int*)malloc(sizeof(int) * uNum);
	for (i = 0; i < uNum; i++) {
		uStatus[i] = -1;
	}
	for (i = 0; i < logNum; i++) {
		scanf("%d %d %d", &scanLog[i].time, &scanLog[i].user, &scanLog[i].race);
	}
	for (i = 0; i < logNum; i++) {
		if (uStatus[scanLog[i].user - 1] == scanLog[i].race) { 
			printf("NO");
			break;
		}
		else if (uStatus[scanLog[i].user - 1] == 0 && scanLog[i].race == 1){ 
			if (scanLog[i].time - uArr[scanLog[i].user - 1] < 60) { 
				printf("NO");
				break;
			}
			uStatus[scanLog[i].user - 1] = scanLog[i].race;
		}
		else { 
			uArr[scanLog[i].user - 1] = scanLog[i].time;
			uStatus[scanLog[i].user - 1] = scanLog[i].race;
		}
	}
	if (i == logNum) { 
		for (j = 0; j < uNum; j++) {
			if (uStatus[j] != 1) { 
				printf("NO");
				break;
			}
		}
		if (j == uNum) { 
			printf("YES");
		}
	}
	free(scanLog);
	free(uArr);
	free(uStatus);
	return 0;
}