#include<stdio.h> /น้มุ 2292/
int main() {
	int n, a = 0, b = 0, cnt;
	scanf("%d", &n);
	while (1) {
		if (n <= 6 * a + 1) {
			 cnt = b + 1;
			break;
		}
		b++;
		a += b;
	}
	printf("%d", cnt);
}