/*i)An array is a collection of elements of the same data type,stored in contiguous memory locations 
ii declare and initialize  a 2D array named scores
  int scores[2][2]={
              {65,92},
              {84,72}
};
*/
#include <stdio.h>

int main() {
    // Array declaration and initialization (from part II)
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };
    
    int row, col;
    
    printf("Elements of the 2x2 scores array:\n");

    // Outer loop: Iterates through rows (i = 0 and i = 1)
    for (row = 0; row < 2; row++) {
        // Inner loop: Iterates through columns (j = 0 and j = 1)
        for (col = 0; col < 2; col++) {
            // Print the element using its row and column index
            printf("scores[%d][%d] = %d\t", row, col, scores[row][col]); 
        }
        // Print a newline after each row is completely printed
        printf("\n"); 
    }
    
    return 0;
}

