#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void jae(int n, int cnt) {
	if (n == 0) {
		for (int i = 0; i < cnt; i++) printf("____");
		printf("\"����Լ��� ������?\"\n");
		for (int i = 0; i < cnt; i++) printf("____");
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		for (int i = 0; i < cnt; i++) printf("____");
		printf("��� �亯�Ͽ���.\n");
		return;
	}
	for (int i = 0; i < cnt ; i++) printf("____");
	printf("\"����Լ��� ������?\"\n");
	for (int i = 0; i < cnt; i++) printf("____");
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	for (int i = 0; i < cnt; i++) printf("____");
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	for (int i = 0; i < cnt; i++) printf("____");
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	jae(n - 1, cnt + 1);
	for (int i = 0; i < cnt; i++) printf("____");
	printf("��� �亯�Ͽ���.\n");
}
int main() {
	int n;
	scanf("%d", &n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	jae(n, 0);
	return 0;
}