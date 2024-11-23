#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(((double)a - (double)c >= 0.5 && (double)b - (double)d >= 0.5) || ((double)a - (double)d >= 0.5 && (double)b - (double)c >= 0.5)) printf("yes");
    else printf("no");

    return 0;
}