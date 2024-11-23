#include <stdio.h>

int main(void)
{
    double var_d = 0;
    double *ptr_var_d = &var_d;

    *ptr_var_d = -54.38; 

     // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}