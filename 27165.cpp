#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, tmp = 0;

    cin >> n;

    vector<int> squareOfPiece;
    squareOfPiece.push_back(n);
    vector<int> startPiece(n);
    vector<int> endPiece(n);

    for (int i = 0; i <= n; i++) {
        cin >> squareOfPiece[i];
    }

    cin >> x;

    for (int i = 0; i <= n; i++) {
        if (squareOfPiece[i] != 1) {
            continue;
        }
        if (squareOfPiece[i] + squareOfPiece[i + x] > 1) {
            startPiece[tmp] = i;
            endPiece[tmp] = i + x;
            tmp++;
        }
    }

    if (tmp == 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        cout << startPiece[0] << " " << endPiece[0] << endl;
    }
    
}