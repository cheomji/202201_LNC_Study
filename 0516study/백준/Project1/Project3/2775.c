#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a(int m, int n) {
	int sum = 0;
	if (m == 1) 
		for (int i = 0; i < n; i++) 
			sum += i + 1;
	if (m > 1) 
		for (int i = 0; i < n; i++) 
			sum += a(m - 1, i + 1);
	return sum;
}
int main() {
	int num, k, n;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", a(k, n));
	}
	return 0;
}