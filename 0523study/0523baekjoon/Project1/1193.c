#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, i = 1, j = 1, cnt = 0;
	scanf("%d", &n);
	while (n - 1) {
		n--;
		if (i == 1 && j % 2 == 1) {
			j++;
			cnt++;
		}
		else if (i % 2 == 0 && j == 1) {
			i++;
			cnt++;
		}
		else if (cnt % 2 == 1) {
			i++;
			j--;
		}
		else {
			i--;
			j++;
		}
	}
	printf("%d/%d", i, j);
	return 0;
}