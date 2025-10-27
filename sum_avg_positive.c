#include <stdio.h>
int main(){
	int n, sum=0, count=0;
	float average;
	printf("How many numbers you want to enter: ");
	scanf("%d", &n);
	
	int num[n];
	for(int i=0; i<n; i++){
	printf("Enter %d elements: ", i+1);
	scanf("%d", &num[i]);}

    printf("\nThe elements you entered are: ");
    for(int i = 0; i < n; i++){
    printf("%d ", num[i]);
    }
    for(int i=0; i<n; i++){
    	if(num[i]>0){
    		sum += num[i];
    		count += 1;
		}
	}
	if(count==0){
		printf("No positive number entered!");
	}
    else
        average = sum / count;
        printf("\nSum of postive numbers is = %d ", sum);
        printf("\naverage of postive numbers is = %.2f ", average);
        

    
    
    
    
    
    
    
    
    
    
    
    
	return 0;
}