#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_lines(char* line1, char* line2) {
    char *ptr1 = line1;
    char *ptr2 = line2;
    
    while (*ptr1 != '\0' && *ptr2 != '\0') {
        if (*ptr1 == ' ') {
            ptr1++;
            continue;
        }
        
        if (*ptr2 == ' ') {
            ptr2++;
            continue;
        }
        
        if (*ptr1 != *ptr2) {
            return 0;
        }
        
        ptr1++;
        ptr2++;
    }
    
    if (*ptr1 == '\0' && *ptr2 == '\0') {
        return 1;
    }
    
    return 0;
}

int main() {
    char line1[100];
    char line2[100];
    
    printf("Enter line 1: ");
    fgets(line1, sizeof(line1), stdin);
    
    printf("Enter line 2: ");
    fgets(line2, sizeof(line2), stdin);
    
    if (compare_lines(line1, line2)) {
        printf("Lines are equal.\n");
    } else {
        printf("Lines are not equal.\n");
    }
    
    return 0;
}