
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically less than the second.\n");
    } else {
        printf("The first string is lexicographically greater than the second.\n");
    }

    return 0;
}


/*solved manually

#include <stdio.h>
int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int i;

    for (i = 0; str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]; i++) {
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Both strings are equal.\n");
    } else if (str1[i] < str2[i]) {
        printf("The first string is lexicographically less than the second.\n");
    } else {
        printf("The first string is lexicographically greater than the second.\n");
    }

    return 0;
}

*/
