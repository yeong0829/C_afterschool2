#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("# �޸𸮰� �����մϴ�.\n"); 
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));

	return 0;
}