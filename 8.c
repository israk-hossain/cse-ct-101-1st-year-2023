#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    int length = strlen(inputString);

    for (int i = 0; i < length / 2; i++) {
        char temp = inputString[i];
        inputString[i] = inputString[length - i - 1];
        inputString[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", inputString);

    return 0;
}
