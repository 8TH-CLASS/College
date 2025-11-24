#include <stdio.h>

// Structure to store sparse matrix elements
// Only stores non-zero values to save memory
struct Element {
    int row;     // Row index
    int col;     // Column index
    int value;   // Non-zero value
};

int main() {
    // Original sparse matrix (4x5) - many zeros
    int sparse[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };
    
    printf("Original Sparse Matrix (4x5):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", sparse[i][j]);
        }
        printf("\n");
    }
    
    // Count non-zero elements
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sparse[i][j] != 0) {
                count++;
            }
        }
    }
    
    // Create compact representation
    // Store only non-zero elements: [row][col][value]
    struct Element compact[count];
    int k = 0;  // Index for compact array
    
    // Fill compact array with non-zero values
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sparse[i][j] != 0) {
                compact[k].row = i;
                compact[k].col = j;
                compact[k].value = sparse[i][j];
                k++;
            }
        }
    }
    
    // Display compact representation
    printf("\nCompact Form (Row, Col, Value):\n");
    printf("Row  Col  Value\n");
    printf("----------------\n");
    for (int i = 0; i < count; i++) {
        printf("%2d   %2d   %2d\n", 
               compact[i].row, 
               compact[i].col, 
               compact[i].value);
    }
    
    // Memory comparison
    printf("\nMemory Efficiency:\n");
    printf("Original matrix: %lu bytes\n", sizeof(sparse));
    printf("Compact form: %lu bytes\n", sizeof(compact));
    printf("Space saved: %lu bytes\n", sizeof(sparse) - sizeof(compact));
    
    return 0;
}