#include <stdio.h>
#include <time.h>
#define MAX_NUMBER 5


void intro_game() {
	printf("������Ŀ� ��Ÿ�� ���� �߿���\n");
	printf("���� ���� ��Ÿ�� ���ڸ� ã�ƶ�\n");
	printf("���� �ð��� 5���Դϴ�.\n");
	printf("�ƹ�Ű�� ������ �����մϴ�.\n");
}

void print_number(int n, int cnt[]) {
	int r_num;
	for (int i = 0; i < MAX_NUMBER; i++) {
		cnt[i] = 0;
	}
	for (int i = 0; i < MAX_NUMBER; i++) {
		for (int j = 0; j <= n; j++) {
			r_num = rand() % MAX_NUMBER;
			cnt[r_num] += 1;
			printf("%d", r_num);
		}
		printf("\n");
	}
}

void find_num(int cnt[]) {
	int i, check, max_num = 0;
	for (i = 0; i < MAX_NUMBER; i++) {
		if (max_num <= cnt[i]) {
			max_num = cnt[i];
			check = i;
		}
	}
	return check;
}

void game_control() {
	int cnt[MAX_NUMBER];
	clock_t start, end;
	double pst;
	int user, answer;
	//�Լ�
	print_number(MAX_NUMBER, cnt);
	printf("����Ƚ���� ���� ���� ���� �Է�: ");
	start = clock;
	while (!kbhit()) {
		end = clock();
		pst = (double)(end - start) / CLK_TCK;
		if (pst > 5) {
			printf("�ð� ���� 5�ʰ� �Ѿ����ϴ�.\n");
			exit(0);
		}
	}
	user = _getch() - '0';
	printf("%d", user);
	answer = find_num(cnt);	//�󵵼��� ���� ���� ���� ã��
	check_result(user, answer, cnt);//�Լ�
}

void check_result(int user, int answer, int cnt[]) {
	//����, Ʋ�� ���
	if (user == answer) {
		printf("�¾ҽ��ϴ�.\n");
	}
	else {
		printf("Ʋ�Ƚ��ϴ�.\n");
	}
	//���� ���
	printf("��ȣ: %d, Ƚ��: %d\n", answer, cnt[answer]);
}

int main(void) {
	srand(time(NULL));
	
	intro_game();// ���� ���� �Ǵ� ���࿡ ���� ���� ��� �Լ�
	game_control();// ���ӿ� ���� �������� ���� �Լ�

	return 0;
}

//�󵵼��� ���� ���� ���� ã�� -> �󵵼��� ���� ���� ���� ã��