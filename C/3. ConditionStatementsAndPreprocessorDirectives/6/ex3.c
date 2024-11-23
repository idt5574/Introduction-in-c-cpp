#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int c = rand() % (b - a + 1) + a,
    d = rand() % (b - a + 1) + a,
    e = rand() % (b - a + 1) + a,
    f = rand() % (b - a + 1) + a,
    g = rand() % (b - a + 1) + a,
    h = rand() % (b - a + 1) + a,
    i = rand() % (b - a + 1) + a,
    j = rand() % (b - a + 1) + a,
    k = rand() % (b - a + 1) + a,
    l = rand() % (b - a + 1) + a;

    printf("%d %d %d %d %d %d %d %d %d %d", c, d, e, f, g, h, i, j, k, l);

    return 0;
}