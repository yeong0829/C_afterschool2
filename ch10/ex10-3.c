#include <stdio.h>

int main(void) {
	int ary[3] = { 10, 20, 30 };
	int* pa = ary + 2;
	int i;

	printf("배열의 값: ");
	for (i = 0; i < 3; i++) {
		printf("%u", pa);
		printf("5%d", *pa);
		pa=pa-1;
	}
	return 0;
}