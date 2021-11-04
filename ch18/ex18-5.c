#include <stdio.h>

int main(void) {
	int ch;

	while (1) {
		ch = fpetc(stdin);
		if (ch == EOF) {
			break;
		}
		fputc(ch, stdout);
	}

	return 0;
}