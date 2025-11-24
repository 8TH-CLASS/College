#include <stdio.h>

int main() {
    // Sparse matrix - a matrix with mostly zero values
    // Only 3 non-zero elements out of 9 total
    int sparse[3][3] = {
        {0, 0, 3},  // Row 0: only position [0][2] has value
        {4, 0, 0},  // Row 1: only position [1][0] has value
        {0, 5, 0}   // Row 2: only position [2][1] has value
    };
    
    // Print the original sparse matrix
    printf("Sparse Matrix:\n");
    for (int i = 0; i < 3; i++) {          // Loop through rows
        for (int j = 0; j < 3; j++) {      // Loop through columns
            printf("%d ", sparse[i][j]);
        }
        printf("\n");  // New line after each row
    }
    
    // Convert to compact form - store only non-zero values
    // Format: [row position][column position][value]
    // This saves memory by ignoring all the zeros
    printf("\nCompact Form:\n");
    printf("Row Col Value\n");
    for (int i = 0; i < 3; i++) {          // Check each row
        for (int j = 0; j < 3; j++) {      // Check each column
            if (sparse[i][j] != 0) {       // Only store if non-zero
                printf("%d   %d   %d\n", i, j, sparse[i][j]);
            }
        }
    }
    
    return 0;
}