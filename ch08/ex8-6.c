#define _CRT_SECURE_NO_WARNINGSS
#include <stdio.h>

int main(void) {
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	return 0;
}