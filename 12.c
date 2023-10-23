#include <stdio.h>

int main()
{
    int SA[100], DA[100];
    int n, i;


    scanf("%d", &n);]]

    if (n <= 0)
    {
        printf("The number of elements should be positive.\n");
        return 1;
    }


    for (i = 0; i < n; i++)
    {
        scanf("%d", &SA[i]);
    }

    for (i = 0; i < n; i++)
    {
        DA[i] = SA[i];
    }


    for (i = 0; i < n; i++)
    {
        printf("%d ", DA[i]);
    }

    return 0;
}
