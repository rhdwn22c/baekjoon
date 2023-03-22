#include <iostream>
#include <vector>
using namespace std;

int main() {
    int player, boseongNum;
    int answer = 0;
    int tmp;
    
    cin >> player >> boseongNum;

    vector<int> playerNum(player);
    vector<bool> checkNum(player);

    for (int i = 0; i < player; i++) {
        cin >> playerNum[i];
    }

    tmp = playerNum[0];

    while (checkNum[tmp] != true) {
        answer++;
        checkNum[tmp] = true;

        if (tmp == boseongNum) {
            cout << answer << endl;
            return 0;
        }
        tmp = playerNum[tmp];
    }

    cout << "-1" << endl;
}