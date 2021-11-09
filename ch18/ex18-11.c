#include <stdio.h>

int main(void) {
	FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("a2.txt", "wt");
	fprintf(afp, "%d", num);

	bfp = fopen("b2.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);

	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);

	fclose(bfp);

	return 0;

}