#define _CER_SECUER_NO_WARNINGS
#include <stiod.h>

int main(void) {
	int age;
	char name[20];

	printf("���� �Է�: ");
	scanf("%d", &age);
	getchar();
	printf("�̸� �Է�: ");
	gets(name);
	printf("����: %d, �̸�: %s\n", age, name);

	return 0;
}