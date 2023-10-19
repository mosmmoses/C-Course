#include <stdio.h>

int main(void) {
  int hours, minutes, seconds;
  printf("Enter seconds: "); 
  scanf("%d", &seconds);
  hours = (seconds/3600)%24;
  minutes = (seconds%3600)/60;
  seconds = (seconds%3600)%60;
  printf("Time: %d:%d:%d\n", hours, minutes, seconds);
  return 0;
}
