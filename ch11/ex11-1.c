#include <stdarg.h>

int main(void) {
	char small , cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) {
		small = cap + ('a' - 'A');
	}
	printf("�빮��: %c %c", cap, '\n');
	printf("�ҹ���: %c", small);

	printf("�빮��: %d %d", cap, '\n');
	printf("�ҹ���: %d", small)

	return 0;
}