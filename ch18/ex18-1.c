#include <stdio.h>

int main(void) {
	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}
	printf("파일이 열렸습니다.");
	fclose(fp);

	return 0;
}