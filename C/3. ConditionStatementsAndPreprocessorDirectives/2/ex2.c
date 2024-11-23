#include <stdio.h>

int main(void)
{
    int m, n;
    if(scanf("%d, %d", &m, &n) != 2) {
        printf("Input error.");
        return 0;
    }

    if(n == 0 || m % n != 0) printf("division error");
    else printf("%d", m / n);

    return 0;
}