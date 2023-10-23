
#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100], stringWithoutSpaces[100];
    int i, j;

    printf("Enter a string with spaces: ");
    fgets(inputString, sizeof(inputString), stdin);

    int length = strlen(inputString);

    j = 0;

    for (i = 0; i < length; i++) {
        if (inputString[i] != ' ') {
            stringWithoutSpaces[j] = inputString[i];
            j++;
        }
    }

    stringWithoutSpaces[j] = '\0';

    printf("String without spaces: %s", stringWithoutSpaces);

    return 0;
}
