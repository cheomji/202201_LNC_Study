#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double res(double x) {
	return 3 * pow(x, 5.0) - 7 * pow(x, 4.0) + 9;
}
void main() {
	double x;
	printf("x�� ���� �Է��ϼ��� : ");
	scanf("%lf", &x);
	printf("x�� ���� %.1lf�� ��, ���׽��� ���� %.2lf�Դϴ�. ", x, res(x));
}