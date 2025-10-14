#include <stdio.h>
int main(){
	
	char choice;
	
	printf("Are you sure you want to delete? [Y/y]/[N/n]:");
	scanf("%c" , &choice);
	
	switch(choice){
		
		case'Y':
		case'y':
			printf("\nDeleted Successfully!\n");
			break;
		
		case'N':
		case'n':
			printf("\nDelete Cancelled!\n");
			break;
		
		default:
			printf("\nChoose the right option.\n");
			
	}
	
	return 0;
}
