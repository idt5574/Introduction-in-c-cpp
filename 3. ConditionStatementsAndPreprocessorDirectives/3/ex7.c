#include <stdio.h>

int main(void)
{
    int a, b, h;
    if(scanf("%d, %d, %d", &a, &b, &h) != 3) {
        printf("Input error.");
        return 0;
    }

    printf("%.1f", ((double)a + (double)b) / 2.0 * (double)h);

    return 0;
}