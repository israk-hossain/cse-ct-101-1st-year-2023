#include <stdio.h>

int main() {
    char array1[100];
    char array2[100];
    char mergedArray[200];

    printf("Enter the first array: ");
    scanf("%s", array1);

    printf("Enter the second array: ");
    scanf("%s", array2);

    int i = 0, j = 0;

    while (array1[i] != '\0') {
        mergedArray[i] = array1[i];
        i++;
    }

    while (array2[j] != '\0') {
        mergedArray[i] = array2[j];
        i++;
        j++;
    }

    mergedArray[i] = '\0';

    printf("Merged array: %s\n", mergedArray);

    return 0;
}