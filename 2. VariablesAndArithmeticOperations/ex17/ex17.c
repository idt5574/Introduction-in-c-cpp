#include <stdio.h>

int main(void)
{
    long long var_ll = 0;
    long double var_ld = 0.;
    short sh = 0;

    scanf("%lld, %Lf, %hd", &var_ll, &var_ld, &sh);
    printf("%lli %d", var_ll, sh);

    return 0;
}