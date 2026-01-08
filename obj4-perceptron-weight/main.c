#inlcude <stdio.h>
#include <omp.h>

int main() {
	int i, sum = 0;
	int thread_sum[10];
	int input_vector[200];
	int weights_vector[200];
	int mul_values[200];
	omp_set_num_threads(10);
	return 0;
}
