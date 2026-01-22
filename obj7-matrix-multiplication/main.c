#include <stdio.h>
#include <omp.h>

#define DIMENSION 3

void multiplyMatrix(int arr1[DIMENSION][DIMENSION], int arr2[DIMENSION][DIMENSION], int arr3[DIMENSION][DIMENSION]) 
{
	omp_set_num_threads(DIMENSION);
	int i, j;
	#pragma omp parallel
	{
		#pragma omp for collapse(2)
		for(i = 0; i < DIMENSION; i++) 
		{
			for(j = 0; j < DIMENSION; j++) 
			{
				int k;
				arr3[i][j] = 0;
				for(k = 0; k < DIMENSION; k++) 
				{
					arr3[i][j] += arr1[i][k] * arr2[k][j];
				}
			}
		}
	}
}

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
		for(j = 0; j < DIMENSION; j++) 
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	
	// compute multiplication 
	multiplyMatrix(arr1, arr2, arr3);
	
	// print result 
	printf("\nResult Matrix:\n");
	for(i = 0; i < DIMENSION; i++)
	{
		for(j = 0; j < DIMENSION; j++) printf("%d", arr3[i][j]);
		printf("\n");
	}
	return 0;
}
