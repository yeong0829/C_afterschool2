#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[100];
	char h;
	int k;
	int count = 1;

	strcpy(s1, "abbcccdddd");
	h = s1[0];

	for (int i = 1; i < strlen(s1); i++) {
		if (h == s1[i]) {
			count++;
		}
		else {
			printf("%c%d", h, count);
			h = s1[i];
			count = 1;
		}
	}
	return 0;
}