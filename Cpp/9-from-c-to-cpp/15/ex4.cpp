#include <iostream>

inline int sum_ar_int(int* ar, size_t len)
{
    int res = 0;
    for(int i = 0; i < len; i++) res += ar[i];
    return res;
}

int main()
{
    int ar[10];

    for(int i = 0; i < 10; i++) std::cin >> ar[i];

    std::cout << sum_ar_int(ar, 10);

    return 0;
}