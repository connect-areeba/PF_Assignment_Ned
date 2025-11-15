#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float m1, m2, m3;
};

int main() {
    
    printf("\n\t=====STUDENTS MARKS AND AVERAGE=====\n\n");
    struct Student s[5];
    float avg[5];
    int i;
    int top = 0;

    for(i = 0; i < 5; i++) {
        printf("\nEnter name of student %d: ", i+1);
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks of 3 subjects:\n");
        scanf("%f", &s[i].m1);
        scanf("%f", &s[i].m2);
        scanf("%f", &s[i].m3);

        avg[i] = (s[i].m1 + s[i].m2 + s[i].m3) / 3;

        if(avg[i] > avg[top]) {
            top = i;
        }
    }
    printf("\t=+=+=+=+=+==+=+=+=+=+=+=+=+\n\n");
    printf("\t   Students Average Marks\n\n");
    printf("\t=+=+=+=+=+==+=+=+=+=+=+=+=+\n\n");

    for(i = 0; i < 5; i++) {
        printf("\nName: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Average: %.2f\n", avg[i]);
    }

    printf("\t=+=+=+=+=+==+=+=+=+=+=+=+=+\n\n");
    printf("\tStudent with Highest Average\n\n");
    printf("\t=+=+=+=+=+==+=+=+=+=+=+=+=+\n\n");

    printf("Name: %s\n", s[top].name);
    printf("Roll: %d\n", s[top].roll);
    printf("Average: %.2f\n", avg[top]);

    return 0;
}
