#include <iostream>
using namespace std;

int main()
{
	int n, t;
	int ent, dep;
	int posX, posY, rad, x1, y1, x2, y2;

	cin >> t;

	while (t--)
	{
        ent = 0;
		dep = 0;
        
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		
		while (n--)
		{
			cin >> posX >> posY >> rad;

			if ((posX - x1) * (posX - x1) + (posY - y1) * (posY - y1) < rad * rad) {
				if ((posX - x2) * (posX - x2) + (posY - y2) * (posY - y2) > rad * rad) {
					dep++;
                }
            }

			if ((posX - x1) * (posX - x1) + (posY - y1) * (posY - y1) > rad * rad) {
				if ((posX - x2) * (posX - x2) + (posY - y2) * (posY - y2) < rad * rad) {
					ent++; 
                }
            }
		}
		cout << ent + dep << endl;
	}

}