#include <iostream>
using namespace std;

int main() {
    int regularPolygon;
    int temperature;
    int crystal = 1;
    int plusExcreta = 1;

    cin >> regularPolygon >> temperature;

    for (int i = 0; i < temperature; i++) {
        plusExcreta += regularPolygon - 2;
        crystal += plusExcreta;
    }
    cout << crystal << endl;
}