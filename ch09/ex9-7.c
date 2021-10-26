#include <stdio.h>

int main(void) {
	int a = 10, b = 20;

	sqap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void sqap(int* pa, int* pb) {
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}