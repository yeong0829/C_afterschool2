#include <stdio.h>

int main(void) {
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);

	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);
	str[strlen(str) - 1] = '\0';
	printf("���๮�ڸ� �� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;
}