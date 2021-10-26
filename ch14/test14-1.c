#include <stdio.h>

int main(void) {
	int arr[] = { 2,3,0,0,4,0,6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int arr2[n];
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			arr2[j] = arr[i];
			i = j + 1;
		}
	}
	for (int i = j; i < n; i++) {
		arr2[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		printf("%d", arr2[i]);
	}

	return 0;
}