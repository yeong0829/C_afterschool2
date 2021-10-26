#define _CRT_SECURE_NO-WARNINGS
#include <stdio.h>

int main(void) {
	int ary[3];
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%d", ary + i);
	}

	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}
	return 0;

}