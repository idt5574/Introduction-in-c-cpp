#include <stdio.h>

int main(void)
{
    int a;
    int proiZV = 1;
    while (scanf("%d", &a) != 0 && a != 0)
    {
        proiZV *= a > 0 ? a : 1;
    }
    printf("%d", proiZV);

    return 0;
}