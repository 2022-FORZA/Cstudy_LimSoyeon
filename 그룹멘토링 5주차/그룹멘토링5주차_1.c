#include<stdio.h>
int main() {
    int in, out, platform[4] = { 0, }, i, sum = 0, max = 0;
    for (i = 0; i < 4; ++i) {
        scanf("%d %d", &out, &in);
        sum -= out;
        sum += in;
        platform[i] = sum;
    }
    for (i = 0; i < 4;++i) {
        if (max < platform[i]) {
            max = platform[i];
        }
    }
    printf("%d", max);
}