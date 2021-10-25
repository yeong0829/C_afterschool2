#include <stdio.h>

int sum(int, int);

int main(void) {
	int a = 10, b = 20;
	int result;

	printf("%d\n", sum(100, 200));
	//printf("%d\n", sum("abc", "def"))
	//printf("%d\n", sum(1, 2, 3, 4));
	result = sum(a, b);
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y) {
	int temp;
	temp = x + y;
	return temp;
}