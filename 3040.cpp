#include <iostream>
using namespace std;

int main() {
    int d[10], c[10], a = 0, b, sum;

    for (int i = 1; i <= 9; i++)
        cin >> d[i];
    for (int r = 1; r <= 8; r++) {
        a = r;
        for (int i = 2; i <= 9; i++) {
            b = i;
            sum = 0;
            for (int k = 1; k <= 9; k++) {
                if (k != a && k != b)
                    sum += d[k];
            }
            if (sum == 100) {
                break;
            }
        }
        if (sum == 100) {
            break;
        }
    }
    for (int i = 1; i <= 9; i++) 
        if (i != a && i != b)
            cout << d[i] << '\n';
}