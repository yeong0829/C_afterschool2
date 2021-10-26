//�л����� ������ 4.3�� ����
//�迭 grades[]�� �л� 10���� ������ �Է�
//100�� �������� ��ȯ�Ͽ��� �迭 scores[]�� �����ϴ� �Լ� �ۼ�
//�迭�� ���� �Է�


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
	printf("%d���� �Ǽ��� �Է�: ", size);
	for (int i = 0; i < size; i++) {
		scanf("%lf", pa + i);
	}
}

void convert(double* grades, double* scores, int size) {
	for (int i = 0; i < size; i++) {
		scores[i] = (100 / 4.3) * grades[i];
	}
}

