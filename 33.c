
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main() {
    FILE *fPtr;
    char filename[] = "example.txt";
    char content[1000];


    fPtr = fopen(filename, "a");
    if (fPtr == NULL) {
        printf("ERROR\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter contents(ctrl+D)\n");

    while (fgets(content, sizeof(content), stdin) != NULL) {

        fprintf(fPtr, "%s", content);
    }

    fclose(fPtr);

    printf("Contents appended\n");

    return 0;
}
