#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number: ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month number\n");
    } else {
        if (month >= 3 && month <= 5) {
            printf("Spring\n");
        } else if (month >= 6 && month <= 8) {
            printf("Summer\n");
        } else if (month >= 9 && month <= 11) {
            printf("Autumn\n");
        } else {
            printf("Winter\n");
        }
    }

    return 0;
}
