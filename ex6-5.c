#include <stdio.h>

int main(void) {
	int i, sum = 0;
	for (i = 1; i <= 10;i++) {
		sum = sum + i;
		printf("ing.. i=%d, sum=%d", i, sum);
		if (sum > 30) {
			break;
		}
	}
	printf("������ �� %d\n", sum);
	printf("���������� ���� ��: %d\n", i);

	return 0;
}