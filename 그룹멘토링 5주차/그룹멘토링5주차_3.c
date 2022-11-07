#include<stdio.h>
int main() {
	int n, i, num[1001], max = 0, count = 0;
	scanf("%d", &n);
	for (i = 0;i < n; ++i) {
		scanf("%d", &num[i]);
	}
	for (i = 0;i < n - 1;++i) {
		if (num[i] < num[i + 1]) {
			count += num[i + 1] - num[i];
			if (count > max) {
				max = count;
			}
		}
		else {
			count = 0;
		}
	}
	printf("%d", max);
	return 0;
}