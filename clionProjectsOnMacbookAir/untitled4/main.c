#include <stdio.h>
// (c-h)^2 + l^2 = c^2
// c^2 - 2ch + h^2 + l^2 = c^2
//
int main(void) {
    long long int h, l;
    double c, ch2;
    while(scanf("%lld %lld", &h, &l)!=EOF) {
        ch2 = h * h + l * l;
        //printf("%.3f\n", ch2);
        c = ch2 / (2 * h);
        printf("%.3f\n", c-h);
    }
    return 0;
}