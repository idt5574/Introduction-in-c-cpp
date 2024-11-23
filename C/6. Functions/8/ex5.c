#include <stdio.h>
#include <stdarg.h>
#include <string.h>

double sumf(char*, ...);

int main(void)
{
    double res = sumf("++ + +", 1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    printf("%.2f ", res);

    return 0;
}

double sumf(char* condition, ...)
{
    double res = 0.0;
    va_list arg;
    va_start(arg, strlen(condition));
    for(int i = 0; i < strlen(condition); i++)
        res += (condition[i] == '+' ? va_arg(arg, double) : va_arg(arg, double) * 0);
    va_end(arg);
    return res;
}