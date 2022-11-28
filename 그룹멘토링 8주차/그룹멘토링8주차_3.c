#include <stdio.h>
int main(){
	int n, i, j, num[1000];
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", num + i);
		for (j = i;j--;)
		{
			if (num[j] >= num[j + 1]) break;
			num[j + 1] ^= num[j] ^= num[j + 1] ^= num[j];
		}
	}
	if (num[0] == 0) {
		printf("0");
	}
	else if (num[n - 1] >= n) {
		printf("%d", n);
	}
	else
	{
		for (i = 1;i < n;i++) if (num[i - 1] >= i && num[i] <= i)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}