#include <iostream>

int square(const int*);
int square(int*);

int main(){
  const int n1{2};
  int n2{3};
  int square_n1 {square(&n1)};
  int square_n2 {square(&n2)};

  std::cout << "square(n1): " << square_n1 << "\tn1: " << n1 << std::endl;

  std::cout << "square(n2): " << square_n2 << "\tn2: " << n2 << std::endl;

}

int square(const int* num)
{
  return *num * *num;
}

int square(int* num)
{
  *num = *num * *num; // изменяем значение по адресу в указателе
  return *num;
}