#include <stdio.h>
struct student
{
	int num;
	char name[20];
	double grade;
};

struct node
{
	int x;
	int y;
};

int main(void)
{
	struct student s1;

	s1.num = 1;
	strcpy(s1.name, "ȫ�浿");
	s1.grade = 2.7;
	printf("�й� : %d\n", s1.num);
	printf("�̸� : %s\n", s1.name);
	printf("���� : %.1lf\n", s1.grade);

	struct student s2;
	s2.num = 2;
	strcpy(s2.name, "�̼���");
	s1.grade = 4.5;
	printf("�й� : %d\n", s2.num);
	printf("�̸� : %s\n", s2.name);
	printf("���� : %.1lf\n", s2.grade);

	return 0;
}