#include <stdio.h>

int main() {
    char choice;   
    int qty, total = 0;

    printf("ABC Restaurant Online Order Placement\n");
    printf("WELCOME!\n");
    printf("Please select from the following Menu\n");
    printf("B = Burger (Rs 200)\n");
    printf("F = French Fries (Rs 50)\n");
    printf("P = Pizza (Rs 500)\n");
    printf("S = Sandwiches (Rs 150)\n");

    printf("\nEnter the snack you want to order: ");
    scanf(" %c", &choice);

    printf("Enter the quantity: ");
    scanf("%d", &qty);

    switch(choice) {
        case 'B':
            total = qty * 200;
            printf("%d Burger(s) = %d Rs\n", qty, total);
            break;

        case 'F':
            total = qty * 50;
            printf("%d French Fries(s) = %d Rs\n", qty, total);
            break;

        case 'P':
            total = qty * 500;
            printf("%d Pizza(s) = %d Rs\n", qty, total);
            break;

        case 'S':
            total = qty * 150;
            printf("%d Sandwich(es) = %d Rs\n", qty, total);
            break;

        default:
            printf("Invalid choice!.\n");
    }

    if (total > 0) {
        printf("Total Bill = %d Rs\n", total);
        printf("\nThank you for your order... Have a nice day!\n");
    }

    return 0;
}
