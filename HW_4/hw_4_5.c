#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        sum += (n + i) * (n + i);
        //sum += pow((n + i), 2);
    }

    printf("Sum = %d\n", sum);

    return 0;
}
