#include <iostream>

inline void range(int* ar, size_t max_ar_len, int start, int stop, int step)
{
    for(int i = 0; i < max_ar_len; i++)
    {
        ar[i] = start + step * i;
        if(ar[i] + step >= stop) break;
    }
}

int main()
{
    int ar[10] = {0};

    range(ar, 10, -5, 10, 3);

    for(int i = 0; i < 10; i++) std::cout << ar[i] << ' ';

    return 0;
}