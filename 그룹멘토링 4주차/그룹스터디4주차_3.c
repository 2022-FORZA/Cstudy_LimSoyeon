#include<stdio.h> /น้มุ 2577/
int main() {
	int a, b, c, mul, num[10] = {0,}, i;
	scanf("%d %d %d", &a, &b, &c);
	mul = a * b * c;
	while (mul>0) {
		num[mul % 10]++;
		mul = mul / 10;
	}
	for (i = 0;i < 10;i++) {
		printf("%d\n", num[i]);
	}
}