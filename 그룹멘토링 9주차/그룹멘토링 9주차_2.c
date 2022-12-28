#include<stdio.h> /*น้มุ 1453*/
int main() {
	int n, i, seat, a[100] ={0,}, cnt = 0;
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &seat);
		if (a[seat] == 1) {
			cnt++;
		}
		a[seat] = 1;
	}
	printf("%d", cnt);
}