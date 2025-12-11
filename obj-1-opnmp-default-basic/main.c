//Objective 1: WAP in C to demonstrate the OPENMP programming by printing Hello World 
#include <stdio.h>
#include <omp.h>

int main(){
	#pragma omp parallel
	{
		printf("Hello World!\n");
	}
	return 0;
}
