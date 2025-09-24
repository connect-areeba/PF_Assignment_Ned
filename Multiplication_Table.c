#include <stdio.h>
int main(){
	
	printf("====Multiplication Table====\n");
	
	int i, num;
	
	printf("\nEnter a number:");
	scanf("%d", &num);
		
	for( i = 1 ; i <= 10 ; i++){
	printf("%d x %d = %d\n", num, i, num * i);
	}
	
	return 0;
	
}