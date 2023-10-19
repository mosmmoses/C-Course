#include <stdio.h>

main () {
  printf("Task 2:\n");
  
  char symbol = 127;
  printf("Symbol: %c\n", symbol);
  symbol++;

  printf("Symbol after overflow: %c\n", symbol);
  symbol = (int)symbol;
  printf("Number after overflow: %d\n", symbol);

  return 0;
}
