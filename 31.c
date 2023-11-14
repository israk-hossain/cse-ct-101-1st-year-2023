#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";
    char content[] = "Start:\n";

    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fprintf(file, "%s", content);

    fclose(file);

    printf("Content has been written\n");

    return 0;
}

