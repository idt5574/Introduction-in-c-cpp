#include <iostream>

int main()
{
    short* ptr_ar = new short[15];
    for(int i = 0; i < 15; i++) ptr_ar[i] = -1;
    ptr_ar[5] = 100;

    return 0;
}