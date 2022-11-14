#include<stdio.h>
int main() {
	int i, j, w[11], k[11], tmp, sumw = 0, sumk = 0;
	for (i = 0;i < 10;i++) {
		scanf("%d", &w[i]);
	}
	for (i = 0;i < 10;i++) {
		scanf("%d", &k[i]);
	}
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 9;j++) {
			if (w[j] > w[j + 1]) {
				tmp = w[j];
				w[j] = w[j + 1];
				w[j + 1] = tmp;
			}
		}
	}
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 9;j++) {
			if (k[j] > k[j + 1]) {
				tmp = k[j];
				k[j] = k[j + 1];
				k[j + 1] = tmp;
			}
		}
	}
	printf("%d %d", w[7] + w[8] + w[9], k[7] + k[8] + k[9]);
}