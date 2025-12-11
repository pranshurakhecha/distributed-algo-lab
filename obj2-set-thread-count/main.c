//Objective 2: WAP in C to demonstrate a sample OpenMP code with 5 threads and its id to print "Hello World"
#include <stdio.h>
#include <omp.h>

int main(){
	omp_set_num_threads(5);
	int id;
	#pragma omp parallel
	{
		id = omp_get_thread_num();
		printf("Thread: %d = Hello World!\n", id);
	}
	return 0;
}
