#include <iostream>

using PTR_FUNC = bool (*)(int);

bool positive(int x)
{
    return x > 0;
}

bool all(const int* ar, size_t len, PTR_FUNC filter)
{
    for(int i = 0; i < len; i++)
        if(!filter(ar[i]))
            return 0;
    return 1;
}

int main()
{   
    int ar[] = {2, 3, 1, -10, 15};

    bool res = all(ar, 5, &positive);

    return 0;
}