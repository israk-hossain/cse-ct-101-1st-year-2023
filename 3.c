
#include <stdio.h>

int main() {
    char str[20];

    printf("Enter a string (up to 20 characters): ");
    scanf("%19s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
