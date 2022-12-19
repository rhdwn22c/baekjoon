#include <iostream>
using namespace std;

long long fArr[50] = {
    0,
    1,
};

long long f(int n)
{
    if (n == 0 || n == 1)
    {
        return fArr[n];
    }
    else if (fArr[n] == 0)
    {
        fArr[n] = f(n - 1) + f(n - 2);
    }
    return fArr[n];
}
int main()
{
    int t, temp;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        if (temp == 0)
        {
            cout << "1 0" << '\n';
        }
        else
        {
            cout << f(temp - 1) << ' ' << f(temp) << '\n';
        }
    }
}