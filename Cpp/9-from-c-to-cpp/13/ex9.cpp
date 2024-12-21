#include <iostream>

double get_mean(const short* d, const size_t len)
{
    double res = 0;

    for(int i = 0; i < len; i++)
        res += d[i];
    
    return res / (double)len;
}

double get_mean(const int* d, const size_t len)
{
    double res = 0;

    for(int i = 0; i < len; i++)
        res += d[i];
    
    return res / (double)len;
}

double get_mean(const double* d, const size_t len)
{
    double res = 0;

    for(int i = 0; i < len; i++)
        res += d[i];
    
    return res / (double)len;
}

int main()
{
    short ar[100] = {0};
    int count = 0;

    while(count < 100 && std::cin >> ar[count])
        count++;

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << get_mean(ar, count);

    return 0;
}