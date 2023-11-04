//Инициализация структур
#include <stdio.h>

struct person{
int age;
char* name;
}tom = {38, "Tom"};

int main(void)
{
  printf("Name: %s\t Age: %d\n", tom.name, tom.age);
  
  return 0;
}