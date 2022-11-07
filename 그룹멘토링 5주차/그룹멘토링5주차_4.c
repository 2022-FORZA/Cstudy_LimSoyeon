#include<stdio.h>
int main() {
	int c, i, n, stu[1001], j, sum = 0, cnt;
	double ave = 0;
	scanf("%d", &c);
	for (i = 0;i < c;i++) {
		scanf("%d", &n);
		for (j = 0;j < n;j++) {
			scanf("%d", &stu[j]);
			sum += stu[j];
		}
		ave = (double)sum / n;
		for (j = 0;j < n; j++) {
			if (ave < stu[j]) {
				cnt++;
			}
		}
		printf("%.3f%%\n", (double)cnt / n * 100);
		cnt = 0, sum = 0, ave = 0;
	}
}