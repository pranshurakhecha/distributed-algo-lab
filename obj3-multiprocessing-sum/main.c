// Objective: WAP in C to perform sum of first 100 positive integers using 4 threads
#include <stdio.h>
#include <omp.h>

int main() {
	int i, sum = 0;
	int thread_sum[4];
	omp_set_num_threads(4);
	
	#pragma omp parallel
	{
		int id = omp_get_thread_num();
		thread_sum[id] = 0;
		#pragma omp for
		for(i = 1; i <= 100; i++)
		{
			thread_sum[id] = thread_sum[id] + i;
		}
	}
	for(i = 0; i < 4; i++) {
		printf("Thread-%d sum = %d\n", i, thread_sum[i]);
		sum = sum + thread_sum[i];
	}
	printf("Sum = %d", sum);
	return 0;
}

