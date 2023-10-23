
#include <stdio.h>

int main() {
    int size, i, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n",sum);

    return 0;
}


