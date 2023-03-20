#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string s;
    vector<string> v;

    for (int i = 0; i < a; i++) {
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < a; i++) {
        reverse(v[i].begin(), v[i].end());
        cout << v[i] << endl;
    }
}