#include <stdio.h>
#include <stdarg.h>

void ar_scan(double*, size_t, ...);

int main(void)
{
    double weights[40] = {1.25, 4.34, -5.43, 0.01, -0.8};
    double w1, w2, w3;
    ar_scan(weights, 3, &w1, &w2, &w3);

    printf("%.2f %.2f %.2f", w1, w2, w3);

    return 0;
}

void ar_scan(double* ar, size_t cnt, ...)
{
    va_list ptr;
    va_start(ptr, cnt);
    for(int i = 0; i < cnt; i++)
    {
        double* tmp = va_arg(ptr, double*);
        *tmp = ar[i];
    }
}