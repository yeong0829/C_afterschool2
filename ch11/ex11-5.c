#define _CER_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int res;
	char ch;

	while (1) {
		res = scanr("%c", &ch);
		if (res == 1) {
			break;
		}
		printf("%d", ch);
	}

	return 0;
}