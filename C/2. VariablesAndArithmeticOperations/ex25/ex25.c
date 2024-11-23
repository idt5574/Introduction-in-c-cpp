#include <stdio.h>

int main(void)
{
    int b1; // первый член прогрессии
    int q; // знаменатель прогрессии

    scanf("%d, %d", &b1, &q);
    int Sn = ((double) q * (double) q * (double) q * (double) q - 1) * (double) b1 / (q - 1);
    printf("%d", Sn);
    
    return 0;
}