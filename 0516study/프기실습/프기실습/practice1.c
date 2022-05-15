#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int res(int x, int y, char op) {
	switch (op)
	{
	case '+': return x + y;
		break;
	case '-': return x - y;
		break;
	case '*': return x * y;
		break;
	case '/': return x / y;
		break;
	case '%': return x % y;
		break;
	}
}
void main() {
	int x, y, op;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &x, &y);
	printf("연산자를 입력하시오 : ");
	scanf("\n%c", &op);
	printf("%d%c%d = %d", x, op, y, res(x, y, op));
}