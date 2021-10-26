#define _CER_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch, chtest;
	int cnt = 0, long_cnt = 0;
	int res = 0;
	chtest = scnaf("%c");
	while ((res = scanf("%c") != -1) {
		if (ch == "\n") {
			cht = 0;
			if (cnt > long_cnt) {
				long_cnt = cnt;
			}
		}
		else {
			cnt++;
		}
	}
	printf("¹®ÀÚ¿­: %d", long_cnt);

	return 0;
}