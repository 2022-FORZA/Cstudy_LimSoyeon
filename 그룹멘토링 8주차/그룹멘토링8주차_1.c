#include<stdio.h>
#include<string.h>
int main() {
	char str1[1001], str2[1001];
	int i, cnt = 0;
	while (1) {
		cnt++;
		scanf("%s", str1);
		scanf("%s", str2);
		if (strcmp(str1, str2) == 0 && strcmp(str1, "END") == 0) {
			break;
		}
		int alp[27] = { 0, };
		for (i = 0;i < strlen(str1);i++) {
			alp[str1[i] - 'a']++;
		}
		for (i = 0;i < strlen(str2);i++) {
			alp[str2[i] - 'a']--;
		}
		printf("Case %d: ", cnt);
		int chk = 0;
		for (i = 0;i < 26;i++) {
			if (alp[i] != 0) {
				chk = 1;
			}
		}
		if (chk) {
			printf("different");
		}
		else {
			printf("same");
		}
		printf("\n");
	}
}