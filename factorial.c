#include <stdio.h>
int main(){
	
	int num, fact = 1, i;
	
	printf("Enter the number:");
	scanf("%d", &num);
	
	i = num;
	while(i >= 1)
	{
		fact *= i;
		i--;
	}
	
	printf("%d != %d", num, fact);
	
	return 0;
	
}