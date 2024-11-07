#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    for(a; a <= b; a++) {
        int i = 0, d = a;
        while(d > 0) {
        i *= 10;
        i += d % 10;
        d /= 10;
    }
    printf(a != i ? "" : "%d ", a);
    }

    return 0;
}