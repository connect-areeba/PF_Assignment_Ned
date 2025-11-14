#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee employees[3];
    printf("Enter details for 3 employees:\n");
    for(int i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter Name: ");
        scanf("%s", employees[i].name);
        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
		}
    printf("\n\t=+=+=+=+=+==+=+=+=+=+=\n\n");
    printf("\t   Employee Details\n");
    printf("\n\t=+=+=+=+=+==+=+=+=+=+=\n");
    for(int i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i+1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    }
    return 0;
}
