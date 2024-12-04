#include <iostream>

using PTR_FUNC = bool (*)(double);

bool any(const double* ar, size_t len, PTR_FUNC filter)
{
    for(int i = 0; i < len; i++)
        if(filter(ar[i]))
            return 1;
    return 0;
}

bool range_out(double x)
{
    return !((x >= -0.5) && (x <= 0.5));
}

int main()
{
    double ar[] = {0.1, 0.2, 0.3, -0.4, 1.4};

    bool res = any(ar, 5, &range_out);
    return 0;
}