#include <stdio.h>
#include <omp.h>

int main() {
	omp_set_num_threads(4);
	#pragma omp parallel sections
	{
		#pragma omp section
		{
			printf("First Section\n");
		}
		#pragma omp section 
		{
			printf("Second Section\n");
		}
		#pragma omp section
		{
			printf("Third Section\n");
		}
		#pragma omp section 
		{
			printf("Fourth Section");
		}
	}
	return 0;
}
