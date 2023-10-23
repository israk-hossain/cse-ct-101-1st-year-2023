#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    printf("Enter a lowercase string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int length = strlen(inputString);

    for (int i = 0; i < length; i++) {
        if (inputString[i] >= 'a' && inputString[i] <= 'z') {
            inputString[i] -= 32;
        }
    }

    printf("Uppercase string: %s", inputString);

    return 0;
}

