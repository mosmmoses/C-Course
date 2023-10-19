#include <iostream>

int main() {
  int n, m; 
  double result;
  std::cout << "Enter values: n,m: ";
  std::cin >> n >> m;
  result = (n/m) % 10;
  std::cout << "Result: " << result << std::endl;
  return 0;
}
