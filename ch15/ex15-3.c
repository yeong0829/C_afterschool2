#include <stiod.h>

void printf_str(char** pps, int cnt);

int main(void) {
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	printf_str(ptr_ary, count);

	return 0;
}
void print_str(char** pps, int cnt) {
	int i;
	for (i = 0; i < cnt; i++) {
		printf("%s\n", pps[i]);
	}
}