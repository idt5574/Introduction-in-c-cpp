#include <stdio.h>

int main(void)
{
    int a, i = 1;
    double sum = 0;
    scanf("%d", &a);
    
    do
    {
        sum += 1.0 / (double) i ;
    } while (++i <= a);
    
    printf("%.2f", sum);

    return 0;
}