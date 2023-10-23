#include <stdio.h>

void pnn(int n) {
    if (n > 0) {
       pnn(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);

    printf("First %d natural numbers: ", N);
    pnn(N);
    printf("\n");

    return 0;
}

