#include<stdio.h> /*น้มุ 1952*/
int main() {
	int m, n, cnt;
	scanf("%d %d", &m, &n);
	if (m <= n) {
		cnt = 2 * m - 2;
	}
	else {
		cnt = 2 * n - 1;
	}
	printf("%d", cnt);
}