#include <stdio.h>
#include <string.h>

int mian(void) {
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);

	printf("&s\n", str);

	return 0;
}