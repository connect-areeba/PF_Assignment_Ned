#include <stdio.h>
int main(){

     char a = 'P';
	 int i, j, k;
	 
	 for(i=0; i<4; i++){
	 	for(k=0; k<i; k++){
	 		printf(" ");
		 }
		 for(j=0; j<4-i; j++){
		 	printf(" ");
		 	printf("%c", a);
		 	a++;
		 }
		 printf("\n");
	 }
	
	char b = 'O';
	for(i = 1; i<=5; i++){
		for(k=1; k<=5-i; k++){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			printf("%c ", b);
			b--;
		}
		printf("\n");
	}
	
	return 0;
}
