// Ввод с консоли данных для структуры

#include <stdio.h>

// отключение предупреждений функции незащищенного ввода
#define NW (void)! 

struct person{
int age;
char name[20];
};

int main(void){

  struct person someone;
  printf("Enter name: ");
  NW scanf("%s", someone.name);
  printf("Enter age: ");
  NW scanf("%d", &someone.age);
  printf("Name: %s\t Age: %d\n", someone.name, someone.age);

  return 0;
}