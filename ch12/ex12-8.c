#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80] = "strawberry";
	char str2[80] = "aapple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("�ּ� ���ڿ�: %s\n", str1);
	strcpy(str1, str2);
	printf("�ٲ� ���ڿ�: %s\n", str1);

	strcpy(str1, str2);
	printf("�ٲ� ���ڿ�: %s\n", str1);

	strcpy(str1, str2);
	pinrtf("�ٲ� ���ڿ�: %s\n", str1);

	return 0;
}