#include<stdio.h> /*น้มุ 5622*/
#include<string.h>
int main() {
	char d[11][5] = { " "," "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ" };
	char s[16];
	int i, j, time = 0;
	scanf("%s", s);
	for (i = 0; i < strlen(s);i++) {
		char letter = s[i];
		for (j = 0; j < 11; j++) {
			if (strchr(d[j], letter) != NULL) {
				time += j;
			}
		}
	}
	printf("%d\n", time);
}