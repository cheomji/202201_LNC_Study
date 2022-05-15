#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int row(int h, int n) {
	if (n % h == 0) return h;
	return n % h;
}
int col(int h, int n) {
	if (n % h == 0) return n / h;
	return n / h + 1;
}
int main() {
	int n, H, W, N;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &H, &W, &N);
		printf("%d%02d\n", row(H, N), col(H, N));
	}
	return 0;
}