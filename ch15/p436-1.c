#include <stdio.h>

int main(void) {
	double grade = 4.5;
	double* pg = &grade;
	double** ppg = &pg;

	printf("%.1lf\n", **ppg);
	printf("%u\n", &ppg);
	printf("%u\n", &pg);
	printf("%u\n", *ppg);
	printf("%u\n", &*ppg);
	return 0;
}