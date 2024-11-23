#include <stdio.h>

int main(void)
{
    unsigned int a = 1, b = 1, c, n;
    scanf("%u", &n);
    printf("1 1 ");
    n -= 1;
    while(--n > 0) {
        unsigned int x = a + b;
        printf("%u ", x);
        a = b;
        b = x;
    }

    return 0;
}