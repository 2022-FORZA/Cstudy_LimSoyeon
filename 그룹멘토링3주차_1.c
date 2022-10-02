#include<stdio.h>
int main() {
	int n, i, j, k, star;
	scanf("%d", &n);
	star = n * 2 - 1;
	for (i = 0; i < n;++i) {
		for (j = 0;j < i;++j) {
			printf(" ");
		}
		for (k = 0;k < star ;++k) {
			printf("*");
		}
		star -= 2;
		printf("\n");
	}
	star = 3;
	for (i = 0;i < n - 1; ++i) {
		for (j = 0;j < n - 2 -i; ++j) {
			printf(" ");
		}
		for (k = 0;k < star;++k) {
			printf("*");
		}
		star += 2;
		printf("\n");
	}
}