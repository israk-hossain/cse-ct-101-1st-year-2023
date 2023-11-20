#include <stdio.h>

void concatenateStrings(char firstString[], char secondString[]) {
    int i = 0, j = 0;

    while (firstString[i] != '\0') {
        i++;
    }

    while (secondString[j] != '\0') {
        firstString[i] = secondString[j];
        i++;
        j++;
    }

    firstString[i] = '\0';
}

int main() {
    char firstString[100], secondString[100];

    printf("Enter the first string: ");
    gets(firstString);

    printf("Enter the second string: ");
    gets(secondString);

    concatenateStrings(firstString, secondString);

    printf("Concatenated string: %s\n", firstString);

    return 0;
}
