#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = (a *= 3) * (b -= 10);
    printf("%d", res);

    return 0;       
}