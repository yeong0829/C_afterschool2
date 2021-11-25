#include <stdio.h>

void number_to_hangul(unsigned long money);
void won_to_dollar(unsigned long moeny);

int main(void) {
	unsigned long money;
	printf("�ݾ��� �Է��ϰ� Enter> ");
	scanf("%ld", &money);
	printf("\nȭ�����\n");
	number_to_hangul(money);

	return 0;
}

void number_to_hangul(unsigned long money) {
	unsigned long money, num1, num2, temp;
	unsigned long m_unit[] = { 100000000, 10000, 1 };
	unsigned long m_unit01[] = { 1000,100,10 };
	int i, j;
	char* unit01[] = { "��", "��", "��" };
	char* unit02[] = { "õ", "��", "��" };
	char* unit03[] = { " ", "��", "��", "��", " ��", "��", "��", "ĥ", "��", "��" };
	printf("�ݾ��� �Է��ϰ� Enter>");
	scanf("%1d", &money);
	printf("\nȭ�����\n");
	for (i = 0; i < 3; i++) {
		num1 = money / m_unit[i];
		if (!num1)
			continue;
		temp = num1;
		for (j = 0; j < 3; j++) {
			num2 = num1 / m_unit01[j];
			if (!num2)
				continue;
			printf("%1d%s ", num2, unit02[i]);
			num1 = num1 - num2 * m_unit01[j];
		}
		printf("%1d%s ", num1, unit01[i]);
		money = money - temp * m_unit[i];
	}
	printf("\n");
}

void won_to_dollar(unsigned long moeny) {

}