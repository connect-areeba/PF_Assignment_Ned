#include<stdio.h>
int main(){
	int marks[8] = {87,12,23,43,31,90,30,78}, i;
	
	for(i=0; i<=7; i++){
		if(marks[i]<35)
		printf("%d ", i);
	}
	
	
	return 0;
} 
