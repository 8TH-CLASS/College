#include <stdio.h>

int main() {
    // 2D Array - like a table with rows and columns
    int arr[3][4] = {
        {1, 2, 3, 4},      // Row 0
        {5, 6, 7, 8},      // Row 1
        {9, 10, 11, 12}    // Row 2
    };
    
    // Access element: arr[row][column]
    printf("Element at [1][2]: %d\n", arr[1][2]);  // Output: 7
    
    // Print entire 2D array using nested loops
    printf("\n2D Array:\n");
    for (int i = 0; i < 3; i++) {          // Loop rows
        for (int j = 0; j < 4; j++) {      // Loop columns
            printf("%2d ", arr[i][j]);
        }
        printf("\n");  // New line after each row
    }
    
    // 3D Array - multiple 2D arrays stacked
    int cube[2][2][3] = {
        {{1, 2, 3}, {4, 5, 6}},        // Layer 0
        {{7, 8, 9}, {10, 11, 12}}      // Layer 1
    };
    
    // Access: cube[layer][row][column]
    printf("\n3D Array:\n");
    for (int i = 0; i < 2; i++) {          // Layers
        printf("Layer %d:\n", i);
        for (int j = 0; j < 2; j++) {      // Rows
            for (int k = 0; k < 3; k++) {  // Columns
                printf("%2d ", cube[i][j][k]);
            }
            printf("\n");
        }
    }
    
    return 0;
}