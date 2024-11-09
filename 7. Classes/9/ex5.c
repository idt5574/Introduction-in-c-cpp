#include <stdio.h>

typedef enum
{
    param_int = 1, param_double = 2
} TYPE_PARAM;

typedef union
{
    int data_i;
    double data_d;
} DATA;

DATA sum_ar(DATA* ar, size_t size, TYPE_PARAM type)
{
    DATA res = {0};
    if(type == 1)
        for(int i = 0; i < size; i++)
            res.data_i += ar[i].data_i;
    else
        for(int i = 0; i < size; i++)
            res.data_d += ar[i].data_d;
    return res;
}

int main(void)
{   
    DATA res_1, res_2;
    res_1 = sum_ar({DATA{1}, DATA{2}, DATA{3}, DATA{4}, DATA{5}}, 5, 1);

    return 0;
}