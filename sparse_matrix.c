#include <stdio.h>
int main(){
	int rows, cols, i, j;
	
	printf("Enter num of rows: ");
	scanf("%d", &rows);
	printf("Enter num of columns: ");
	scanf("%d", &cols);
	
	int matrix[rows][cols];

	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
	printf("Enter [%d][%d] element of matrix: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	int countZeros=0;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
        	if(matrix[i][j] == 0){
				countZeros++;
			}
		}
	}
	printf("Total Zeros = %d\n", countZeros);
	int TotalElements = rows*cols;
	if(countZeros > TotalElements/2){
	    printf("It is a sparse matrix!");
	}
	else printf("It is not sparse matrix");
	return 0;
}






