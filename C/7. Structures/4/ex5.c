#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    double* digits;
    double* ptr_d;
    size_t count = 0;
    double x;

    while (count < 20 && scanf("%.1f", &x) != 0)
    {
        count++;
        digits = malloc(count * sizeof(double));
        digits[count - 1] = x;
    }
    
    memcpy(ptr_d, digits, count * sizeof(double));

    return 0;
}