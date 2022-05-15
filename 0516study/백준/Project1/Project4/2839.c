#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	if (n == 4 || n == 7) printf("-1");
	else {
		while (n) {
			cnt++;
			if (n % 15 == 0 || n % 5 == 0) n -= 5;
			else if (n % 3 == 0) n -= 3;
			else n -= 5;
		}
		printf("%d", cnt);
	}
	return 0;
}