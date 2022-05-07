#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int d(int n) {
	int num = n;
	while (n) {
		num += n % 10;
		n /= 10;
	}
	return num;
}
int main() {
	int a[10000] = { 0 };
	for (int i = 0; i < 10000; i++)
		if (d(i + 1) <= 10000) a[d(i + 1) - 1] = 1;
	for (int i = 0; i < 10000; i++)
		if (a[i] == 0) printf("%d\n", i + 1);
	return 0;
}
