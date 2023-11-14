#include <stdio.h>

int main() {
    int n;


    printf("Enter the num of elements:");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int *ptr = arr;

    printf("Elements in the array using pointers:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *ptr);
        ptr++;
    }

    return 0;
}

