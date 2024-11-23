#include <stdio.h>

int get_sum2(int n, int m)
{
    return n + m;
}

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int res = get_sum2(a, get_sum2(b, c));
    printf("%d", res);

    return 0;
}