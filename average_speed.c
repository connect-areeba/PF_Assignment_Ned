#include <stdio.h>
int main()

  {
	
	int time;
	float d1, d2, d3, d4, d5;
	float avg_speed;
	
	printf("Enter total time travelled (1 to 5 hours):");
	scanf("%d", &time);
	
	printf("Enter distance for hour 1:");
	scanf("%f", &d1);
	
	printf("Enter distance for hour 2:");
	scanf("%f", &d2);
	
	printf("Enter distance for hour 3:");
	scanf("%f", &d3);
	
	printf("Enter distance for hour 4:");
	scanf("%f", &d4);
	
	printf("Enter distance for hour 5:");
	scanf("%f", &d5);
	
	avg_speed = d1+d2+d3+d4+d5/time;
	printf("Average Speed of the car = %.2f miles/hour\n", avg_speed);
	
	return 0;
	
  }