#include<stdio.h>
#include<string.h>
int color_num() {
	char str[7];
	scanf("%s", str);
	if (strcmp(str, "black") == 0) {
		return 0;
	}
	else if (strcmp(str, "brown") == 0) {
		return 1;
	}
	else if (strcmp(str, "red") == 0) {
		return 2;
	}
	else if (strcmp(str, "orange") == 0) {
		return 3;
	}
	else if (strcmp(str, "yellow") == 0) {
		return 4;
	}
	else if (strcmp(str, "green") == 0) {
		return 5;
	}
	else if (strcmp(str, "blue") == 0) {
		return 6;
	}
	else if (strcmp(str, "violet") == 0) {
		return 7;
	}
	else if (strcmp(str, "grey") == 0) {
		return 8;
	}
	else if (strcmp(str, "white") == 0) {
		return 9;
	}
	else
		return color_num();
}
int main() {
	int i, num, j;
	long long value = 0;
	for (i = 0; i < 3;i++) {
		num = color_num();
		if (i == 0) {
			value += num * 10;
		}
		else if (i == 1) {
			value += num;
		}
		else if (i == 2 && num != 0) {
			for (j = 0; j < num;j++) {
				value *= 10;
			}
		}
	}
	printf("%lld", value);
}