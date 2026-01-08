#include <stdio.h>
#include <omp.h>

int main() {
	int i, sum = 0;
	int thread_sum[10];
	int input_vector[200];
	int weights_vector[200];
	int mul_values[200];
	omp_set_num_threads(10);
	
	#pragma omp parallel
	{
		int id = omp_get_thread_num();
		thread_sum[id] = 0;
		#pragma omp for
		for(i = 0; i < 200; i++) {
			input_vector[i] = 2 * i; 		// first 200 even numbers
			weights_vector[i] = 2 * i + 1; 	// first 200 odd nummbers
			mul_values[i] = input_vector[i] * weights_vector[i];
			thread_sum[id] = thread_sum[id] + mul_values[i];
		}
	}
	return 0;
}
