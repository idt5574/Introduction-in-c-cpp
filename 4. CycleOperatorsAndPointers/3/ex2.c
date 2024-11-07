#include <stdio.h>

int main(void)
{
    int sum = 0, a;

    do
    {
        scanf("%d", &a);
        sum += a > 0 ? a : 0;
    } while (a != 13);

    printf("%d", sum);

    return 0;
    
}