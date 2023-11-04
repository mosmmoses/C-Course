#include <stdio.h>

enum operation{
ADD =1,
SUB,
MULTIPLY = 4 
};

int calculate(int x, int y, enum operation op){
  switch(op){
    case ADD:
    return x + y;
    case SUB:
    return x - y;
    case 4:
    return x * y;
    default:
    return 0;
  }
}

int main(void) {
enum operation op = ADD;
int result = calculate(4, 3, op);
printf("Result: %d\n", result);

result = calculate(4, 3, MULTIPLY);
printf("Result: %d\n", result);

result = calculate(4, 3, 2);
printf("Result: %d\n", result);

return 0;
}