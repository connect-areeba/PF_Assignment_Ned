#include <stdio.h>
int main(){
	
	float totalCalories, Fatgram, fat_calories_percentage;
	float Calories_from_fat;
	
	printf("Total Calories:");
	scanf("%f", &totalCalories);
	
	printf("Fats in Gram:");
	scanf("%f", &Fatgram);
	
	if(totalCalories <= 0){
		printf("Wrong Input");
		return 0;
	}
	if(Fatgram <=0){
		printf("Wrong Input");
		return 0;
	}
	
	Calories_from_fat = Fatgram * 9;
	
	if(Calories_from_fat > totalCalories){
		printf("Either Calories or Fat grams were incorrectly entered ");
		return 0;
	}
	
	fat_calories_percentage = (Calories_from_fat/totalCalories)* 100;
	
	if(fat_calories_percentage <= 30){
		printf("food is low in fat\n");
	} 
	
	printf("Fat calories percentage: %.2f\n", fat_calories_percentage);
	
	return 0;
	 
}
