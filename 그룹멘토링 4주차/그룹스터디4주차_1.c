#include<stdio.h> /น้มุ 10992/
int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0;j < n - 1 - i; j++) {
			printf(" ");
		}
		if (i == 0) {
			printf("*");
			printf("\n");
		}
		else if (i == n - 1) {
			for (j = 0;j < 2 * n - 1;j++) {
				printf("*");
			}
		}
		else {
			printf("*");
			for (j = 0; j < i * 2 - 1;j++) {
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
	}
}