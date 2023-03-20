#include <iostream>
#include <iomanip>
using namespace std;

void printLine()
{
  cout << "+";
  for (int i = 0; i < 21; ++i)
    cout << "-";
  cout << "+\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, d;
  cin >> n >> d;

  int firstWeekDays = 8 - d;
  int remainedDays = n - firstWeekDays;
  int totalWeeks = 1 + (remainedDays + 6) / 7;

  printLine();

  int day = 1;
  for (int week = 1; week <= totalWeeks; week++)
  {
    cout << "|";
    for (int weekday = 1; weekday <= 7; weekday++)
    {
      if ((week == 1 && weekday < d) || day > n)
        cout << "...";
      else
        cout << setw(3) << setfill('.') << day++;
    }
    cout << "|\n";
  }

  printLine();

  return 0;
}