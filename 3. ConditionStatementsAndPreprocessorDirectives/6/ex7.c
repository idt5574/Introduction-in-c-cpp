#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

     double res = round((double) N * 2.54);
     printf("%.f", res);

    return 0;
}