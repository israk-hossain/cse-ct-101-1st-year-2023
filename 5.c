#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);

    printf("%d! = %d\n", N, factorial(N));

    return 0;
}
