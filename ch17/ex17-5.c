#include <stdio.h>

struct vision {
	double left;
	double right;
};

struct vision exchange(struct vision robot);

int main(void) {
	struct bision robot;

	printf("�÷� �Է�: ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷�: %.1lf %.qlf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot) {
	double temp;

	temp = robot.left;
	robo.elft = robot.right;
	robot.right = temp;

	return robot;
}