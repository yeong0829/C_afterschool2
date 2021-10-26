#include <stdarg.h>

int main(void) {
	char small , cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) {
		small = cap + ('a' - 'A');
	}
	printf("대문자: %c %c", cap, '\n');
	printf("소문자: %c", small);

	printf("대문자: %d %d", cap, '\n');
	printf("소문자: %d", small)

	return 0;
}