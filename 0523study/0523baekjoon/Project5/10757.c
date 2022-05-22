#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void rearr(char d[]) {
	for (int i = 0; i < strlen(d) / 2; i++) {
		char temp = d[i];
		d[i] = d[strlen(d) - i - 1];
		d[strlen(d) - i - 1] = temp;
	}
}
int main() {
	char a[10001], b[10001], c[10002];
	for (int i = 0; i < 10001; i++) {
		a[i] = '0';
		b[i] = '0';
	}
	scanf("%s%s", a, b);
	rearr(a); rearr(b);
	int size = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
	a[strlen(a)] = '0'; b[strlen(b)] = '0';
	for (int i = 0; i < size; i++) {
		if (a[i] - '0' + b[i] - '0' > 9) {
			a[i + 1] += 1;
			c[i] = a[i] + b[i] - 10 - '0';
		}
		else
			c[i] = a[i] + b[i] - '0';
	}
	if (a[size] - '0') {
		c[size] = '1';
		c[size + 1] = '\0';
	}
	else c[size] = '\0';
	rearr(c);
	for (int i = 0; i < strlen(c); i++)
		printf("%c", c[i]);
	return 0;
}