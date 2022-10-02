#include<stdio.h>
int main() {
	int n, i, num[100], j, count = 0;
	scanf("%d", &n);
	for (i = 0;i < n;++i) {
		scanf("%d", &num[i]);
	}
	for (i = 0;i < n;++i) {
		for (j = 2;j <= num[i];++j) {
			if (num[i] % j == 0) {
				if (j == num[i]) {
					count++;
					break;
				}
				else {
					break;
				}
			}
		}
	}
	printf("%d", count);
}