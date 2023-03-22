#include <iostream>
using namespace std;

int main() {
    int icecreamNum, combinationNum;
    int answer = 0;
    bool dontMixCheck[1000][1000];

    cin >> icecreamNum >> combinationNum;

    for (int i = 0; i < combinationNum; i++) {
        int dontMixNum1, dontMixNum2;
        cin >> dontMixNum1 >> dontMixNum2;
        dontMixCheck[dontMixNum1][dontMixNum2] = true;
        dontMixCheck[dontMixNum2][dontMixNum1] = true;
    }

    for (int i = 1; i <= icecreamNum; i++) {
        for (int j = i + 1; j <= icecreamNum; j++) {
            if (dontMixCheck[i][j]) {
                continue;
            }
            for (int k = j + 1; k <= icecreamNum; k++) {
                if (dontMixCheck[i][k] || dontMixCheck[j][k]) {
                    continue;
                }
                answer++;
            }
        }
    }

    cout << answer << endl;
}
