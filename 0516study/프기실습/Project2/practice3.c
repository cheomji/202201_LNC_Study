#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double res(int x1, int y1, int x2, int y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
void main() {
	int x1, y1, x2, y2;
	printf("직선의 시작점 좌표를 입력하세요 : ");
	scanf("%d %d", &x1, &y1);
	printf("직선의 끝점 좌표를 입력하세요 : ");
	scanf("%d %d", &x2, &y2);
	printf("(%d, %d)~(%d, %d) 직선의 길이 : %.2lf입니다.", x1, y1, x2, y2, res(x1, y1, x2, y2));
}