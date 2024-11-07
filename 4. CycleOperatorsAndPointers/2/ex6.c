#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) printf(n % i != 0 ? "" : "%d ", i);

    return 0;
}