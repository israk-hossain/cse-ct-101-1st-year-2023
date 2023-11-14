#include <stdio.h>

int main()
{
    int num1, num2;
    int sum;
    int *pointer1, *pointer2;


    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);


    pointer1 = &num1;
    pointer2 = &num2;


    sum = *pointer1 + *pointer2;


    printf("%d+%d is %d\n", *pointer1, *pointer2, sum);

    return 0;
}
