#include <stdio.h>

int main(void) {
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time -= hour;
	time *= 60;
	min = (int)time;
	time -= min;
	time *= 60;
	printf("%3.76시간은 %d시 %d분 %d초\n", hour, min, sec);

	return 0;


}