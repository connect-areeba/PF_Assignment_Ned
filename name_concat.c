#include <stdio.h>
#include <string.h>

int main() {
    char first[20];
    char last[20];
    char full[40];

    printf("Enter your first name: ");
    scanf("%s", first);

    printf("Enter your last name: ");
    scanf("%s", last);


    strcat(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("Full name: %s\n", full);

    int count = strlen(full);
    printf("Number of characters in full name: %d\n", count);

    return 0;
}
