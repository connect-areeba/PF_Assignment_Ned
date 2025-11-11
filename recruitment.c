#include <stdio.h>

void assignPosition() {
    int marks, experience = 0;
    
    printf("Enter your test marks: ");
    scanf("%d", &marks);
    
    if (marks >= 60) {
        printf("Enter your experience in years: ");
        scanf("%d", &experience);
    }
    
    if (marks >= 70 && experience >= 2) {
        printf("You are selected as Associate Developer!\n");
    } 
    else if (marks >= 60 && experience >= 1) {
        printf("You are selected as Assistant Developer!\n");
    } 
    else if (marks >= 50) {
        printf("You are selected as Trainee Engineer!\n");
    } 
    else {
        printf("Sorry, you are not selected;-)\n");
    }
}

int main() {
    assignPosition();
    return 0;
}
