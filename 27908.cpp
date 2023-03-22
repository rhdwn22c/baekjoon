#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int totalDay, start;
    cin >> totalDay >> start;

    int firstDay = 8 - start;
    int remainDay = totalDay - firstDay;
    int week = 1 + (remainDay + 6) / 7;

    cout << "+---------------------+" << endl;
    
    int day = 1;

    for (int i = 1; i <= week; i++) {
        cout << "|";
        for (int j = 1; j <= 7; j++) {
            if ((i == 1 && j < start) || day > totalDay) {
                cout << "...";
            }
            else {
                cout << setw(3) << setfill('.') << day++;
            }
        }
        cout << "|" << endl;
    }

    cout << "+---------------------+" << endl;

}
