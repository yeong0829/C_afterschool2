#define _CER_SECUER_NO_WARNINGS
#include <stiod.h>

int main(void) {
	char str[80];

	printf("문자열 입력: ");
	scanf("%s", str);
	printf("첫번째 단어: %s\n", str);
	scanf("%s", str);
	printf("버퍼에 남아있는 두번쨰 단어: %s\n", str);

	return 0;
}