#include <stdio.h>

void mergeStrings(const char *firstString, const char *secondString, char *result) {
    int i = 0, j = 0;

    while (firstString[i] != '\0') {
        result[i] = firstString[i];
        i++;
    }

    while (secondString[j] != '\0') {
        result[i] = secondString[j];
        i++;
        j++;
    }

    result[i] = '\0';
}

int main() {
    char firstString[100], secondString[100];
    char mergedString[200];

    printf("Enter the first string: ");
    scanf("%s", firstString);

    printf("Enter the second string: ");
    scanf("%s", secondString);

    mergeStrings(firstString, secondString, mergedString);

    printf("Merged string: %s\n", mergedString);

    return 0;
}
