#include <stdio.h>

int main(void) {
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Both strings are equal.\n");
    } else if (str1[i] > str2[i]) {
        printf("First string is greater.\n");
    } else {
        printf("Second string is greater.\n");
    }

    return 0;
}