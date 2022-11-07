#include<stdio.h>
int main() {
	int nan[9], i, sum = 0, over = 0, j, tmp;
	for (i = 0; i < 9; ++i) {
		scanf("%d", &nan[i]);
		sum += nan[i];
	}
	over = sum - 100;
	for (i = 0;i < 9;++i) {
		for (j = 0; j < i; ++j) {
			if (nan[i] + nan [j] == over) {
				nan[i] = 0;
				nan[j] = 0;
				break;
			}
		}
		if (nan[i] == 0 && nan[j] == 0) {
			break;
		}
	}
	for (i = 0;i < 9;++i) {
		for (j = i+1;j < 9;++j) {
			if (nan[i] > nan[j]) {
				tmp = nan[j];
				nan[j] = nan[i];
				nan[i] = tmp;
			}
		}
	}
	for (i = 2; i < 9; ++i) {
		printf("%d\n", nan[i]);
	}
}