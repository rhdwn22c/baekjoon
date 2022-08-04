#include <stdio.h>

int main(){
    int hor, ver; // 체스판의 가로 세로 길이
    char arr[50][50];
    int min = 32; // 최소값만 저장하기 위한 변수, 나올 수 있는 제일 높은 변경 횟수가 31이기 때문에 32로 초기 설정
    
    scanf("%d %d", &hor, &ver);
    
    for(int i = 0; i < hor; i++){
        scanf("%s", arr[i]);
    }
    
    for(int i = 0; i < hor - 7; i++){ // 가능한 세로 범위에서
        for(int j = 0; j < ver - 7; j++){ // 가능한 가로 범위에서
            int cnt = 0;
            for(int k = i; k < i + 8; k++){
                for(int l = j; l < j + 8; l++){
                    cnt += (k + l) % 2 == 1 ^ arr[k][l] == 'B'; // 다시 칠해야할 칸이 있으면 카운트
                }
            }
            cnt = 64 - cnt < cnt ? 64 - cnt : cnt; // 32보다 크면 흰색과 검정색 기준을 바꾸면 다시 칠해야할 칸이 더 적아진다.
            if(cnt < min) min = cnt;
        }
    }
    
    printf("%d\n", min);
    return 0;
}