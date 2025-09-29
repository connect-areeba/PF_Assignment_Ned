#include <stdio.h>

int main(){
	float salary, taxrate, taxamount, netsalary;
	
	printf("Enter your salary:");
	scanf("%f" , &salary);
	
	printf("Enter tax rate (in percentage):");
	scanf("%f" , &taxrate);
	
	taxamount = salary*(taxrate/100);
	netsalary = (salary - taxamount);
	
	printf("Tax to be paid: %.2f\n", taxamount);
	printf("salary after tax: %.2f\n", netsalary);

	 return 0;
	
}