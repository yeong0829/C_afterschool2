#include <stdio.h>

int main(void) {
	double ary[5] = { 1.2, 3.5,7.4,0.5,10.0 };
	double* pa = ary;
	double* pb = ary + 4;

	int i;
	for (i = 0; i < 5; i++) {
		printf("%.1lf ", *(pa + i));
	}
	for (i = 0; i < 5; i++) {
		printf("%.1lf ", *(pb - i));
	}
	return 0;
}