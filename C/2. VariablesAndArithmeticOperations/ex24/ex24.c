#include <stdio.h>

int main(void)
{
    int a1; // первый член прогрессии
    int a50; // 50-й член прогрессии

    scanf("%d, %d", &a1, &a50);
    int Sn = ((double)a1 + (double)a50) / 2.0 * 50.0;
    printf("%d", Sn);

    return 0;
}