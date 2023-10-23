
#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Zero\n");
            break;
        } else if (num > 0) {
            printf("Positive\n");
        } else {
            printf("Negative\n");
        }
    }

    return 0;
}
