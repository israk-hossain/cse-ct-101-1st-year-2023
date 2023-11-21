#include <stdio.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
    }

    printf("Total alphabets: %d\n", alphabets);
    printf("Total digits: %d\n", digits);

    return 0;
}
