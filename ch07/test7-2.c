#include <stdio.h>

void sum(int);

int main(void) {
	sum(10);
	sum(100);
	return 0;
}

void sum(int x) {
	int hap=0;
	for (int i = ; i <= x; i++) {
		hap = +i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", x, hap);
}