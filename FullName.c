#include <stdio.h>
#include <string.h>
int main(){

	int size1, size2, size3, i, j;
	char firstName[50], lastName[50], fullName[100];
	
	printf("Enter first name: ");
	scanf("%s", firstName);
	printf("Enter last name: ");
	scanf("%s", lastName);
	
	size1 = strlen(firstName);
	for(i=0; i<size1; i++)
	{
		fullName[i] = firstName[i];
	}
	size2 = strlen(lastName);
	for(j=0; j<size2; j++)
	{
		fullName[size1 + j] = lastName[j];
	}
	printf("Full name: %s", fullName);
	printf("\n");
	printf("Reversed Name:");
	size3 = strlen(fullName);
	for(i=size3; i>=0; i--)
    {
       printf("%c", fullName[i]);	
	}	
	printf("\n");
	
	return 0;
}