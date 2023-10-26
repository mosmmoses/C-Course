#include "stdio.h"
int main(void) {
  int x = 1, y = 2, z = 3;
  char c = 'a';
  double d = 1.23;
  
  printf("task 1: \n");
  int *ptr = &x;
  printf("x = %d\n", *ptr);
  
  char *char_ptr = &c;
  printf("c = %c\n", *char_ptr);
  
  double *double_ptr = &d;
  printf("d = %f\n", *double_ptr);
  
  int *int_ptr1, *int_ptr2;
  float *float_ptr1, *float_ptr2, *float_ptr3;

  // task 2
  //typedef char * PCHAR;
  //PCHAR p1, p2;
  //printf("p1 = %p\n", p1);
  //printf("p2 = %p\n", p2);
  
  printf("task 3: \n");
  int * p = &x;
  printf("x = %d\n", *p);
  
  int n = *(p++);
  printf("n0 = %d\n", n);
  
  n = (*p)++;
  printf("n1 = %d\n", n);
  
  n = ++(*p);
  printf("n2 = %d\n", n);
  
  n = *(++p);
  printf("n3 = %d\n", n);
  
  printf("\n");
  return 0;
}
