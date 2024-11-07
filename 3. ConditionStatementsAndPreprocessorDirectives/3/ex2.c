#include <stdio.h>

int main(void)
{
    int a;
    if(scanf("%d", &a) != 1) {
        printf("Input error.");
        return 0;
    }

    printf("%d", a > 0 ? a : 0);

    return 0;
}