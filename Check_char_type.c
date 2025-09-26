#include <stdio.h>
int main(){
	
	char letter;
	
	printf("The Letter is:");
	scanf("%c", &letter);
	
	if ( letter >= 'A' && letter <= 'Z' ){
		printf("The letter is Capital");
	}
	
	else if ( letter >= 'a' && letter <= 'z' ){
		printf("The letter is Small");
	}
	
	else if (letter >= '0' && letter <= '9'){
		printf("It is a Digit");
	}
	
	else
	   printf("Its a special character");
	   
	   return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

