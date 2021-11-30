#include <stdio.h>
#include <string.h>
#include <stdilib.h>

int compare(const void* a, const void* b) {
	const char** X = (const char**)a;
	const char** Y = (const char**)b;

	int len = strlen(*X) + strlen(*Y) + 1;

	char XY[len];
	strcpy(XY, *X);
	strcat(XY, *Y);

	char XY[len];
	strcpy(YX, *Y);
	strcat(YX, *X);

}
int main(void) {
	char* arr[] = { "10", "68", " 75","7","21","12" };
	int n = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, n, sizeof(arr[0]), compare);

	for (int i = 0; i < n; i++) {
		printf("%s", arr[i]);
	}
	return 0;
}