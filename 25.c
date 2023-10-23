
#include <stdio.h>
#include <string.h>

int main() {
    char array1[100];
    char array2[100];
    char mergedArray[200];

    printf("Enter the first array: ");
    scanf("%s", array1);

    printf("Enter the second array: ");
    scanf("%s", array2);

    strcpy(mergedArray, array1);
    strcat(mergedArray, array2);

    printf("Merged array: %s\n", mergedArray);

    return 0;
}

/*
