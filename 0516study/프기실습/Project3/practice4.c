#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void max(int x, int y, int z) {
	int a[] = { x, y, z }, max = x;
	for (int i = 0; i < 3; i++)
		if (a[i] > max) max = a[i];
	printf("�ִ밪�� = %d\n", max);
}
void min(int x, int y, int z) {
	int a[] = { x, y, z }, min = x;
	for (int i = 0; i < 3; i++)
		if (a[i] < max) min = a[i];
	printf("�ּҰ��� = %d\n", min);
}
void mid(int x, int y, int z) {
	int a[] = { x, y, z }, max = x, min = x;
	for (int i = 0; i < 3; i++) {
		if (a[i] > max) max = a[i];
		if (a[i] < max) min = a[i];
	}
	printf("�߰����� = %d\n", x + y + z - max - min);
}
void main() {
	int n, x, y, z;
	while (1) {
		printf("�޴��� �Է��Ͻÿ� (0:���� 1:�ִ밪 2:�߰��� 3:�ּҰ�) : ");
		scanf("%d", &n);
		if (n == 0) break;
		else {
			printf("���� 3���� �Է��ϼ��� : ");
			scanf("%d %d %d", &x, &y, &z);
			if (n == 1) max(x, y, z);
			if (n == 2) mid(x, y, z);
			if (n == 3) min(x, y, z);
		}
	}
}