#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(n; n <= m; n++) printf(n % 2 != 0 ? "" : "%d ", n);

    return 0;
}