#define _CER_SECUER_NO_WARNINGS
#include <stiod.h>

int main(void) {
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է�: ");
	gets(str);
	printf("�Էµ� ���ڿ��� %s�Դϴ�.", str);

	return 0;
}