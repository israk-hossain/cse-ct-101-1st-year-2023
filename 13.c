
#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("The number of rows and columns should be positive.\n");
        return 1;
    }

    int array[rows][cols];
    int sum = 0;

    printf("Enter the elements of the 2D array:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }

    printf("Sum of all elements in the 2D array: %d\n", sum);

    return 0;
}
