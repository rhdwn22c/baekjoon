#include <iostream>
using namespace std;

int main() {
    int count = 1;
	int n; 

    cin >> n;
	while (n >= count) {
		n -= count;
		count++;
	}

	if (count & 1) {
        cout << count - n;
    }
	else {
        cout << 0;
    }
}