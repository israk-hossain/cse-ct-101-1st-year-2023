#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i, j, count;

    printf("Enter size of array: ");//anas_gay
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nFrequency of elements in the array:\n");
    for (i = 0; i < size; i++) {
        count = 1;

        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = arr[size - 1];
                size--;
                j--;
            }
        }

        printf("%d found %d times\n", arr[i], count);
    }

    return 0;
}
