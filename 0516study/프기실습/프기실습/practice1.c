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
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);
	printf("�����ڸ� �Է��Ͻÿ� : ");
	scanf("\n%c", &op);
	printf("%d%c%d = %d", x, op, y, res(x, y, op));
}