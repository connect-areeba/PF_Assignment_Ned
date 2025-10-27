#include <stdio.h>
int main(){
	int n, i, j;
	printf("Enter size of Square matrix: ");
	scanf("%d", &n);
	
	int matrix[n][n], transpose[n][n];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Enter [%d][%d] element of matrix: ", i, j);
            scanf("%d", &matrix[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
	    for(j=0; j<n;j++){
	        transpose[j][i] = matrix[i][j];
	    }
	}
	
	for(i=0; i<n; i++){
	    for(j=0; j<n;j++){
	        if(transpose[i][j] != matrix[i][j]){   // ? fixed here
	            printf("\nMatrix is asymmetric!\n");
	            return 0;
	        }
	    }
	}
	
    printf("\n**The matrix is symmetric**\n");
    printf("The matrix is:\n");
    for(i=0; i<n; i++){
	    for(j=0; j<n;j++){   
	      printf("%d ", matrix[i][j]);
	    }
	    printf("\n");
    }
	return 0;
}
