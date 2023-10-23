
#include <stdio.h>
#include <string.h>

int main() {
    char firstString[100], secondString[100];

    printf("Enter the first string: ");
    gets(firstString);
    printf("Enter the second string: ");
    gets(secondString);
    strcat(firstString, secondString);
    printf("Merged string: %s\n", firstString);

    return 0;
}
