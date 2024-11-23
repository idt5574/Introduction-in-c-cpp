#include <stdio.h>

int main(void)
{
    int* ptr;
    const int* ptr_cnst;
    int * const cnst_ptr;

    
    //cnst_ptr++;

    ptr = cnst_ptr;

    ptr_cnst = ptr;

    --ptr_cnst;

    //*ptr_cnst = 10;

    *cnst_ptr = 77;

    //cnst_ptr = ptr;

    //ptr = ptr_cnst;

    const short sh = 100;


    //char const cnst_ch; cnst_ch = 12;

    const int var;

    //const char ch_cnst; ch_cnst = 12;

    long const lg = 10;

    const int a = 5; int b = a;

    return 0;
}