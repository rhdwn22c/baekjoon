#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Arithmetic(int ten) {
    int temp = ten;
    string nine;

    while (temp) {
        nine += to_string(temp % 9);
        temp /= 9;
    }
    reverse(nine.begin(), nine.end());

    return nine;
}
int main() {
    int t;
    cin >> t;
    cout << Arithmetic(t) << endl;
}