#include <stdio.h> /*น้มุ11365*/
#include <string.h>
int main() {
	char s[501];
	int i;
	while (1) {
		gets(s);
		if (s[0] == 'E' && s[1] == 'N' && s[2] == 'D') {
			break;
		}
		for (i = strlen(s) - 1; i >= 0; i--) {
			printf("%c", s[i]);
		}
		printf("\n");
	}
}
