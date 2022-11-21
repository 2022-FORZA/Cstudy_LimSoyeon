#include<stdio.h> /*น้มุ2775*/
int main() {
	int t, k, n, peo[15][15] = {0,}, i, j;
	for (i = 0;i < 15;i++) {
		peo[0][i] = i;
	}
	for (i = 1; i < 15;i++) {
		for (j = 1; j < 15;j++) {
			peo[i][j] = peo[i - 1][j] + peo[i][j - 1];
		}
	}
	scanf("%d", &t);
	for (i = 0;i < t;i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", peo[k][n]);
	}
}