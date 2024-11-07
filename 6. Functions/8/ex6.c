#include <stdio.h>
#include <stdarg.h>

void ar_fill(double*, size_t, ...);

int main(void)
{
    double ar[5] = {0};
    ar_fill(ar, sizeof(ar) / sizeof(double), 0.1, 0.2, 0.3, 0.4, 0.5);

    return 0;
}

void ar_fill(double* ar, size_t cnt, ...)
{
    va_list nums;
    va_start(nums, cnt);
    for(int i = 0; i < cnt; i++)
        ar[i] = va_arg(nums, double);
}