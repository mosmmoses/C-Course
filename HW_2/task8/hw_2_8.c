#include <stdio.h>
#include <stdlib.h>

void decToBinary(unsigned int n) 
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
  printf("Enter a three-digit integer: ");
  scanf("%d", &num);
  //printf("\n");
  
  printf("Binary notation of this number: ");
  decToBinary(num);
  printf("\n");
  
  num = num >> 10;
  printf("This number after a 10 shift to the right: ");
  decToBinary(num);
  printf("\n");
  return 0;
}
