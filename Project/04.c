#include <stdio.h>
#include <stdlib.h>

int compare(const void* num1, const void* num2) {
	return (*(int*)num1 - *(int*)num2);
}

int main(void) {
	int arr[] = { 1,3,2,6,4,9,5,8 };
	int n = sizeof(arr) / sizeof(arr[0]);

	qosrt(arr, n, sizeof(arr[0]), compare);

	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}