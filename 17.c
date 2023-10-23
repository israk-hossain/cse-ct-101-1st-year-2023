#include <stdio.h>

int main()
{
    int n;


    scanf("%d", &n);

    if (n <= 0)
    {

        return 1;
    }

    int arr[n];
    int sum = 0;


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}
