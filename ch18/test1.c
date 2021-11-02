#include <stdio.h>
#include <string.h>

char* thoggleCase(char* a) {
	for (int i = 0; a[i] != '\0'; i++) {
		a[i] ^= 32;
	}
	return a;
}

int main(void) {
	char str[] = "CheRrV";
	printf("Toggle case: %s\n", toggleCase(str));
	printf("Original string: %s", toggleCase(str));

	return 0;
}