#include<stdio.h>
#include<string.h>
int main() {
	char sen[1000001];
	int i, count = 0;
	scanf("%[^\n]s", sen);
	for (i = 0;i < strlen(sen);i++) {
		if (sen[i] == ' ') {
			count++;
		}
	}
	count++;
	if (sen[0] == ' ') {
		count--;
	}
	if (sen[strlen(sen)-1] == ' ') {
		count--;
	}
	printf("%d", count);
}