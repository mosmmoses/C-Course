#include <iostream>
using namespace std;

int sum(int y, int x);

int main()
{ 
  int a, b;
  
  cout << "Enter 1-st number: " << endl;
  cin >> a;
  cout << "Enter 2-st number: " << endl;
  cin >> b;
  cout << sum(b, a) << endl;
  
  return 0;
}

int sum(int y, int x)
{
  int s = 0;
  
  if ( (y - 1) == x ) s = y + x;
  else s = y + sum(y - 1, x);
  
  return s;
}