#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int rank(int d[][2], int size, int k) {
	int cnt = 0;
	for (int i = 0; i < size; i++) 
		if (d[k][0] < d[i][0] && d[k][1] < d[i][1]) cnt++;
	return cnt + 1;
}
int main() {
	int n, d[100][2];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &d[i][0], &d[i][1]);
	for (int i = 0; i < n; i++) 
		printf("%d ", rank(d, n, i));
	return 0;
}