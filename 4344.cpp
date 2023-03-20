#include <iostream>
using namespace std;

int main() {
    int c, n, upStudents;
	int avgScore;
	int score[1000];
	double resPercent;

	cin >> c;

	for (int i = 0; i < c; i++) {
		avgScore = 0;
		upStudents = 0;

		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> score[j];
			avgScore = avgScore + score[j];
		}

		avgScore = avgScore / n;

		for (int j = 0; j < n; j++) {
			if (score[j] > avgScore) {
				upStudents++;
            }
		}

		resPercent = (double)upStudents / n * 100;

		cout << fixed;
		cout.precision(3);
		cout << resPercent << "%" << endl;
	}
}