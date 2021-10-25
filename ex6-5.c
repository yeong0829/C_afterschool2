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
	printf("누적한 값 %d\n", sum);
	printf("마지막으로 더한 값: %d\n", i);

	return 0;
}