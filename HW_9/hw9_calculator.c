#include <stdio.h>

int minNum(int x, int y, int *b) 
{
  return printf("min number: %d\n", x < y ? x : y);
}

int maxNum(int x, int y, int *b)
{
  return printf("max number: %d\n", x > y ? x : y);
}

int add(int x, int y, int *b)
{
  return printf("x + y = %d \n", x + y);
}

int subtract(int x, int y, int *b)
{
  return printf("x + y = %d \n", x - y);
}

int multiply(int x, int y, int *b)
{
  return printf("x * y = %d \n", x * y);
}

int division(int x, int y, int *b)
{
  return printf("x / y = %d \n", x / y);
}

int endCalculations(int x, int y, int *b)
{
  printf("Ok, bye! \n");
  return *b = 0;
}

//  int choice - выбранный пункт
int (*select(int choice))(int x, int y, int *b)
{
  // возвращаем нужную функцию
  switch (choice)
  {
    case 0:
      return minNum;
      break;
    case 1:
      return maxNum;
      break;
    case 2:
      return add;
      break;
    case 3:
      return subtract;
      break;
    case 4:
      return multiply;
      break;
    case 5:
      return division;
      break;
    case 6:
      return endCalculations;
      break;
    default:
      printf("Invalid operation");
    
  }
}

int main(void)
{ int x = 10;
  int y = 5;

  int choice;
  int b = 1;

  void (*operation)(int, int, int*); // указатель на выбранную функцию

  while (b){
    printf("Select action: 0, 1, 2, 3, 4, 5, 6\n");
    (void)!scanf("%d", &choice);
    operation = select(choice);  
    operation(x, y, &b); // выполняем функцию
  }

  return 0;
}