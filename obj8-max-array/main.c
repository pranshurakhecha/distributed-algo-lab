#include <stdio.h>
#include <omp.h>
#include <limits.h>

int main() {
	int arr[] = {17, 19, 2, 5, 91, 42, 49, 18, 15, 26, 37};
	omp_set_num_threads(3);
	int len = sizeof(arr) / sizeof(arr[0]);
	int max = INT_MIN;
	int i;
	
	#pragma omp parallel
	{
		for(i = 0; i < len; i++) {
			#pragma omp critical
			{
				if(arr[i] > max) max = arr[i];
			}
		}
	}
	
	printf("Maximum Number: %d", max);
	return 0;
}
