#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int main() {
    FILE *fPtr;
    char filename[] = "example.txt";
    char content[MAX_SIZE];

    fPtr = fopen(filename, "r");
    if (fPtr == NULL) {
        printf("Unable to open the file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Contents of the file:\n");

    while (fscanf(fPtr, "%[^\n]\n", content) != EOF) {
        printf("%s\n", content);
    }

    fclose(fPtr);

    return 0;
}
