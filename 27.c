#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int number = n;
    int *pointer;

    pointer = &number;

    printf("Value of 'number': %d\n", number);
    printf("Address of 'number': %p\n", (void *) &number);
    printf("Value of 'number' through pointer: %d\n", *pointer);
    printf("Address stored in the pointer: %p\n", (void *) pointer);
    int i;
    scanf("%d",&i);

    *pointer =i;
    printf("Updated value of 'number' through pointer: %d\n", number);
    printf("Address of 'number': %p\n", (void *) &number);

    return 0;
}

