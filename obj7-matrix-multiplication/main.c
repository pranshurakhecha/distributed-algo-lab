#include <stdio.h>
#include <omp.h>

#define DIMENSION 3

int main() {
	int arr1[DIMENSION][DIMENSION], arr2[DIMENSION][DIMENSION], arr3[DIMENSION][DIMENSION];
	
	// input array 1
	int i, j;
	printf("Enter array 1:\n");
	for(i = 0; i < DIMENSION; i++) 
	{
		printf("Enter row %d: ", i + 1);
		for(j = 0; j < DIMENSION; j++) 
		{	
			scanf("%d", &arr1[i][j]);
		}
	}
	
	// input array 2
	printf("\nEnter array 2:\n");
	for(i = 0; i < DIMENSION; i++) 
	{
		printf("Enter row %d: ", i + 1);
		for(j = 0; j < DIMENSION; j++) {
			scanf("%d",&arr2[i][j]);
		}
	}
	
	
	return 0;
}
