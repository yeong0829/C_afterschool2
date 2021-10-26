#include <stdio.h>

void get_suhak(int x, int y, int* p_sum, int* p_cha, int* p_mul, double* p_div);

int main(void) {

	int x, y;
	int sum = 0, cha = 0, mul = 0;
	double div = 0;
	printf("x 입력: ");
	scanf("%d", &x);
	printf("y 입력: ");
	scanf("%d", &y);
	get_suhak(x, y, &sum, &cha, &mul, &div);
	printf("%d %d %d %d\n", sum, cha, mul, div);

	return 0;
}
void get_suhak(int x, int y, int* p_sum, int* p_cha, int* p_mul, double* p_div) {

	*p_sum = x + y;
	*p_cha = x - y;
	*p_mul = x * y;
	*p_div = x / y;
}