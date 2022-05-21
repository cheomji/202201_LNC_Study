#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, cnt = 1;
	scanf("%d", &n);
	while (n > 0) {
		if (n == 1) break;
		n -= 6 * cnt;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}