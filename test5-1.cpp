#include <stdio.h>

int mian(void) {
	int rank = 2, m = 0;

	if (rank == 1) {
		m = 300;
	}
	else if (rank == 2) {
		m = 200;
	}
	else if (rank == 3) {
		m = 100;
	}
	else {
		m = 10;
	}
	printf("m: %d\n", m);

	return 0;
}