#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

double v_norm2(char* s, ...);

int main(void)
{
    printf("%.1f", v_norm2("vector2", 1.0, 2.0));

    return 0;
}

double v_norm2(char* s, ...)
{
    double res = 0.0;
    int n = s[6] - 48;

    if(n >= 2 && n <= 4)
    {
        va_list arg;
        va_start(arg, n);
        for(int i = 0; i < n; i++)
        {
            double t = va_arg(arg, double);
            res += t * t;
        }
        va_end(arg);
    }

    return res;

}