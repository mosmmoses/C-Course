#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find_occurrences(char* line1, char* line2) {
    int line1_len = strlen(line1);
    int line2_len = strlen(line2);

  // checking that the second line is shorter than the first
    if (line1_len < line2_len) {
        printf("Line 2 cannot occur in Line 1.\n");
        return;
    }

// loop through the characters of the first line
    for (int i = 0; i <= line1_len - line2_len; i++) {
        int found = 1;
// loop through the characters of the second line, checking if it 
// matches the first line at position i
        for (int j = 0; j < line2_len; j++) {
            if (line1[i+j] != line2[j]) {
                found = 0;
                break;
            }
        }
        
        if (found) {
            printf("Line 2 occurs at position %d in Line 1.\n", i);
        }
    }
}

int main() {
    char line1[100] = "The sun was shining, shining brightly in the clear blue sky.";
    char line2[100] = "shining";
    //char line2[100] = "s";
    
    find_occurrences(line1, line2);
    
    return 0;
}