#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int i, j;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    i = -1;
    while (str1[++i]);

    j = 0;
    while (str1[i++] = str2[j++]);

    printf("Concatenated string = %s", str1);

    return 0;
}