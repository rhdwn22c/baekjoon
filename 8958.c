#include <stdio.h>
#include <string.h>

int main() {
    int testCaseNum, score, sum;
    char testCase[80];

    scanf("%d", &testCaseNum);

    for(int i = 0; i < testCaseNum; i++) {
        sum = 0;
        score = 1;
        scanf("%s", testCase);
        for(int j = 0; j < strlen(testCase); j++) {
            if(testCase[j] == 'O') {
                sum += score;
                score++;
            }
            if(testCase[j] == 'X') {
                score = 1;
            }
        }
        printf("%d\n", sum);
    } 
}