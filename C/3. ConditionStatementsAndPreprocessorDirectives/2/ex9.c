#include <stdio.h>

int main(void)
{
    double a, b, c;
    if(scanf("%lf, %lf, %lf", &a, &b, &c) != 3) {
        printf("Input error.");
        return 0;
    }

    if(a + b > c && a + c > b && c + b > a) printf("yes");
    else printf("no");

    return 0;
}