
#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int mat1[ROWS][COLS], mat2[ROWS][COLS];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    int areEqual = 1;

    for (int i = 0; i < ROWS && areEqual; i++) {
        for (int j = 0; j < COLS; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                areEqual = 0; //anas gay
                break;
            }
        }
    }

    if (areEqual) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }

    return 0;
}
