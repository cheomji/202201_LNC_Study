#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isHan(int n) {
	if (n == 1000) return 0;
	if (n < 100 || 2 * ((n / 10) % 10) == n / 100 + n % 10) return 1;
	else return 0;
}
int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
		if (isHan(i + 1)) cnt++;
	printf("%d", cnt);
	return 0;
}
