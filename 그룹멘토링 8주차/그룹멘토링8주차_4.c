#include <stdio.h>
int main(void){
	int T, t, N, i;
	long long x[100];
	scanf("%d", &T);
	for (t = 1; t <= T; t++){
		scanf("%d", &N);
		for (i = 0; i < N; i++)
			scanf("%lld", &x[i]);
		while (N > 2){
			for (i = 0; i <= N / 2; i++)
				x[i] += x[N - i - 1];

			N = (N + 1) / 2;
		}
		printf("Case #%d: %s\n", t, x[0] > x[1] ? "Alice" : "Bob");
	}
	return 0;
}