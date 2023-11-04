//Копирование структур
#include <stdio.h>

struct person
{
  int age;
  char * name;
};

int main(void)
{
  struct person tom = {38, "Tom"};
  // копируем значения из структуры tom в структуру bob
  struct person bob = tom;
  bob.name = "Bob";
  printf("Name: %s \t Age: %d \n", bob.name, bob.age);
  printf("Name: %s \t Age: %d \n", tom.name, tom.age);
  return 0;
}