#include <stdio.h>
#include <math.h>

int main(void){
	
	double a, b, c, discriminant, root1, root2;
	
	printf("Enter a:");
	scanf("%lf", &a);
	
	printf("Enter b:");
	scanf("%lf", &b);
	
	printf("Enter c:");
	scanf("%lf", &c);
	
	discriminant = b*b - 4*a*c;
	
	if (discriminant > 0){
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
		printf("Two Real Roots: %.2lf and %.2lf\n", root1, root2);	
	}
	
	else if (discriminant == 0){
		root1 = -b / 2*a;
		printf("One Real Root: %.2lf\n", root1);
	}
	else{
		printf("No Real Roots %.2lf\n");
	}
	
	return 0;

}