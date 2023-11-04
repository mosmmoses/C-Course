#include <iostream>
#include <cmath>

using namespace std;

int abs (int x)
{
  cout << "(function A)";
  return x > 0 ? x : -x;
}

double abs (double x)
{
  cout << "(function B)";
  return (1 - 2 * (x < 0)) * x;
}

char abs (char x)
{
  cout << "(function C)";
  return x > 0 ? x : -x;
}

double abs (double x, double y)
{
  cout << "(function D)";
  return sqrt (x * x + y * y);
}

int main ()
{
  cout << abs (-3) << endl;
  cout << int (abs (char (-3L))) << endl;
  cout << abs (-3.0) << endl;
  cout << abs ('0') << endl;
  cout << abs (3, 4) << endl;
  return 0;
}
