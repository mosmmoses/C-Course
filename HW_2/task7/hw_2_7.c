#include <stdio.h>
#include <stdlib.h>

void decToBinary(int n) 
{
  int c, k;
  for (c = 31; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }
}

int main(void) {
  int num;
  printf("Enter an integer number: ");
  scanf("%d", &num);
  printf("Binary notation of this number: ");
  decToBinary(num);
  
  printf("\n");
  return 0;
}
