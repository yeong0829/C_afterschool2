//학생들의 평점은 4.3이 만점
//배열 grades[]에 학생 10명의 학점을 입력
//100점 만점으로 변환하여서 배열 scores[]에 저장하는 함수 작성
//배열에 값을 입력


#include <stdio.h>

void input_ary(double* pa, int size);
void convert(double* grades, double* scores, int size);

int main(void) {
	double ary[10];
	double scores[10];
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	convert(ary, scores, size);

	for (int i = 0; i < size; i++) {
		printf("%.1lf  %.1lf\n", ary[i], scores[i]);
	}

	return 0;
}

void input_ary(double* pa, int size) {
	printf("%d개의 실수값 입력: ", size);
	for (int i = 0; i < size; i++) {
		scanf("%lf", pa + i);
	}
}

void convert(double* grades, double* scores, int size) {
	for (int i = 0; i < size; i++) {
		scores[i] = (100 / 4.3) * grades[i];
	}
}

