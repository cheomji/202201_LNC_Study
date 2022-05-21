#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c) 
		printf("-1");
	else {
		int q = a / (c - b);
		while ((c - b) * q <= a) 
			q++;
		printf("%d", q);
	}
	return 0;
}