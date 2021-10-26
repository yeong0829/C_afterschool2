#define _CER_SECUER_NO_WARNINGS
#include <stiod.h>

int main(void) {
	char str[80];

	printf("공백이 포함된 문자열 입력: ");
	gets(str);
	printf("입력된 문자열은 %s입니다.", str);

	return 0;
}