#include <stdio.h>

int main(void)
{
    int a0, d, n;
    scanf("%d; %d; %d", &a0, &d, &n);

    for(int i = 0; i < n; i++) {
        a0 += d * (i > 0);
        printf("%d ", a0);
    }

    return 0;
}