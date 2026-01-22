#include <stdio.h>
#include <math.h>
#include <omp.h>

int main() {
	int a, b, c;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);
	
	omp_set_num_threads(2);
	#pragma omp parallel sections
	{
		#pragma omp section
		{
			int discriminant = (b * b) - (4 * a * c);
			if(discriminant > 0) printf("\nThere are two roots\n");
			else if(discriminant < 0) printf("\nThe roots are imaginary\n");
			else printf("\nThere is a single root\n");
		}
		
		#pragma omp section 
		{
			int discriminant = (b * b) - (4 * a * c);
			if(discriminant < 0);
			else if(discriminant == 0)
			{
				double root = (-b) / (2.0 * a);
				printf("Root: %.2f", root);
			}
			else 
			{
				double root1, root2;
				root1 = ((-b) + sqrt(discriminant)) / (2.0 * a);
				root2 = ((-b) - sqrt(discriminant)) / (2.0 * a);
				printf("Root1: %.2f\n", root1);
				printf("Root2: %.2f", root2);	
			}
		}
	}
	return 0;
}
