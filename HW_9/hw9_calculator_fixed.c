#include <stdio.h>

int minNum(int x, int y) 
{
  printf("min number: %d\n", x < y ? x : y);
  return 0;
}

int maxNum(int x, int y)
{
  printf("max number: %d\n", x > y ? x : y);
  return 0;
}

int add(int x, int y)
{
  printf("x + y = %d \n", x + y);
  return 0;
}

int substract(int x, int y)
{
  printf("x + y = %d \n", x - y);
  return 0;
}

int multiply(int x, int y)
{
  printf("x * y = %d \n", x * y);
  return 0;
}

int division(int x, int y)
{
  printf("x / y = %d \n", x / y);
  return 0;
}

int endCalculations(int x, int y)
{
  printf("Ok, bye! \n");
  return 1;
}

int main(void)
{ int x = 10;
  int y = 5;

  int choice;

  int (*operation[7])() = {minNum, maxNum, add, substract, multiply, division, endCalculations}; // declare an array of function pointers

  do {
    // check if the choice is valid
    do {
      printf("Select action: 0, 1, 2, 3, 4, 5, 6\n");
      (void)!scanf("%d", &choice);
      if (choice < 0 || choice > 6) {
        printf("Error. Try again.\n");
        }
    }
    while (choice < 0 || choice > 6);
  }
  while (operation[choice](x, y) != 1);
 
 return 0;
}