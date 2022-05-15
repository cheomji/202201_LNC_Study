#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, v, day;
	scanf("%d %d %d", &a, &b, &v);
	day = (v - a) / (a - b);
	int h = day * (a - b);
	while (1) {
		day++;
		h += a;
		if (h >= v) break;
		h -= b;
	}
	printf("%d", day);
	return 0;
}