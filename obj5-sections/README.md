Objective - 6: Write a program in C using openMP to demonstrate sections in distributed prograaming 

- #pragma omp parallel: by default single module and multiple threads 
- with multiple modules, each module can have respective threads
- to define different sections: #pragma omp parallel sections
- each section is preceeded by: #pragma omp section