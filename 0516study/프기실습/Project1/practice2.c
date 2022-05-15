#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double res(double x) {
	return 3 * pow(x, 5.0) - 7 * pow(x, 4.0) + 9;
}
void main() {
	double x;
	printf("x의 값을 입력하세요 : ");
	scanf("%lf", &x);
	printf("x의 값이 %.1lf일 때, 다항식의 값은 %.2lf입니다. ", x, res(x));
}