#include <stdio.h>

int main(void) {
	int cnt;
	int n = 1260;
	int coinType[4] = { 500., 100, 50, 10 };
	int size = sizeof(coinType) / sizeof(coinType[0]);

	for (int i = 0; i < size; i++) {
		cnt += n/ coinType[i];
		n %= coinType[i];

	}
	printf("count = %d", coinType);

	return 0;
}