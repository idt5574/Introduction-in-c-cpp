#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    double res = ((double)N * 7.0) / 100.0;
    printf("%.f", ceil(res));

    return 0;
}