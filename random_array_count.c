#include <stdio.h>
#include <stdlib.h>

void countFrequency(int arr[], int size) {
    for (int value = 0; value <= 10; value++) { 
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                count++;
            }
        }
        if (count > 0) {
            printf("Value %d occurs %d times\n", value, count);
        }
    }
}

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array1[n];

   
    srand(1);  

    for (int i = 0; i < n; i++) {
        array1[i] = rand() % 11;
    }

    printf("Generated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n\n");

    countFrequency(array1, n);


    return 0;
}

	
	
	
	
	
	
	
