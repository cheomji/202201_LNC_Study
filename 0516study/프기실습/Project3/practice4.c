#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void max(int x, int y, int z) {
	int a[] = { x, y, z }, max = x;
	for (int i = 0; i < 3; i++)
		if (a[i] > max) max = a[i];
	printf("최대값은 = %d\n", max);
}
void min(int x, int y, int z) {
	int a[] = { x, y, z }, min = x;
	for (int i = 0; i < 3; i++)
		if (a[i] < max) min = a[i];
	printf("최소값은 = %d\n", min);
}
void mid(int x, int y, int z) {
	int a[] = { x, y, z }, max = x, min = x;
	for (int i = 0; i < 3; i++) {
		if (a[i] > max) max = a[i];
		if (a[i] < max) min = a[i];
	}
	printf("중간값은 = %d\n", x + y + z - max - min);
}
void main() {
	int n, x, y, z;
	while (1) {
		printf("메뉴를 입력하시오 (0:종료 1:최대값 2:중간값 3:최소값) : ");
		scanf("%d", &n);
		if (n == 0) break;
		else {
			printf("정수 3개를 입력하세요 : ");
			scanf("%d %d %d", &x, &y, &z);
			if (n == 1) max(x, y, z);
			if (n == 2) mid(x, y, z);
			if (n == 3) min(x, y, z);
		}
	}
}