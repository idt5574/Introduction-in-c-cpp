#include <stdio.h>
#include <stdarg.h>

double mean(int total, ...);

int main(void)
{
    printf("%.2f", mean(7, 5, -10, 11, 0, 12, 4, 2));
    return 0;
}

double mean(int total, ...)
{
    int res = 0;
    va_list arg;
    va_start(arg, total);

    for(int i = 0; i < total; i++)
        res += va_arg(arg, int);

    va_end(arg);

    return (double)res / (double)total;
}