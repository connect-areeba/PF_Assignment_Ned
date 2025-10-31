#include <stdio.h>
#include <string.h>

int main() {
    char emails[5][50];
    char passwords[5][50];
    int userCount = 3;

    strcpy(emails[0], "ghufran@gmail.com");
    strcpy(passwords[0], "Hello12345");

    strcpy(emails[1], "aina@gmail.com");
    strcpy(passwords[1], "0nepieceisreal");

    strcpy(emails[2], "saif@gmail.com");
    strcpy(passwords[2], "xyz987654321");

    int choice;

    printf("\n===== Welcome to the Login System =====\n");

    while (1) {
        printf("\n1. Sign In\n2. Sign Up\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        while (getchar() != '\n');

        if (choice == 1) {
            char enteredEmail[50], enteredPassword[50];
            int found = 0;

            printf("Enter your email: ");
            scanf("%s", enteredEmail);

            printf("Enter your password: ");
            scanf("%s", enteredPassword);

            for (int i = 0; i < userCount; i++) {
                if (strcmp(emails[i], enteredEmail) == 0 && strcmp(passwords[i], enteredPassword) == 0) {
                    printf("\nSign in successful! Welcome, %s\n", enteredEmail);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("\nInvalid email or password.\n");
            }
        }

        else if (choice == 2) {
            if (userCount == 5) {
                printf("\n User limit reached. Cannot register more users.\n");
                printf("Total users: %d/5\n", userCount);
            } 
            else {
                char newEmail[50], newPassword[50];
                int emailExists = 0;

                printf("Enter new email: ");
                scanf("%s", newEmail);

                for (int i = 0; i < userCount; i++) {
                    if (strcmp(emails[i], newEmail) == 0) {
                        emailExists = 1;
                        break;
                    }
                }

                if (emailExists) {
                    printf("\n Email already exists. Try another.\n");
                } 
                else {
                    printf("Enter new password: ");
                    scanf("%s", newPassword);

                    int len = strlen(newPassword);
                    int hasLetter = 0, hasDigit = 0;

                    for (int i = 0; i < len; i++) {
                        char ch = newPassword[i];
                        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
                            hasLetter = 1;
                        if (ch >= '0' && ch <= '9')
                            hasDigit = 1;
                    }

                    if (len < 8 || !hasLetter || !hasDigit) {
                        printf("\nPassword must be at least 8 characters and alphanumeric.\n");
                    } 
                    else {
                        strcpy(emails[userCount], newEmail);
                        strcpy(passwords[userCount], newPassword);
                        userCount++;
                        printf("\nAccount created successfully! You can sign in now.\n");
                        printf("Total users: %d/5\n", userCount);
                    }
                }
            }
        }

        else if (choice == 3) {
            printf("\nExiting program. Goodbye!\n");
            break;
        }

        else {
            printf("\nInvalid choice. Try again.\n");
        }
    }

    return 0;
}
