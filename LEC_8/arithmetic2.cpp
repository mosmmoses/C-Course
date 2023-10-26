#include <iostream>
int main(int argc, char* argv[]) {

  int* pt_var;    // наш указатель
  int var = 515;  // значимая переменная типа int
  int second_var = 2;

  // операция присваивания адреса переменной var указателю pt_var
  pt_var = &var;
  std::cout << "Косвенная операция сложения: " << *pt_var + second_var
            << std::endl;
  std::cout << "значение var = " << var << std::endl;
  return 0;
}