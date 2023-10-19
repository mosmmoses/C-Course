#include <iostream>
using namespace std;

int main(){
  int hours, minutes, seconds;
  cout << "Input seconds: ";  cin >> seconds;
  hours = (seconds/3600)%24;
  minutes = (seconds%3600)/60;
  cout<<"Time: "<< hours << ":" << minutes << endl;
  return 0;
}
