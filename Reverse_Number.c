#include <stdio.h>
int main(){
	int num, last;
	printf("Enter number:");
	scanf("%d", &num);
	
	while(num>0){
		last = num % 10;
		num = num / 10;
		printf("%d", last);
	}
	return 0;
}
