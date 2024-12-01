#include <iostream>

namespace math {
    int ar_compare(const short* a1, size_t len_a1, const short* a2, size_t len_a2) {
        if(len_a1 != len_a2)
            return 0;

        for(int i = 0; i < len_a1; i++) 
            if(a1[i] != a2[i])
                return 0;
        
        return 1;
    }
}

int main()
{
    short ar1[] = {1, 2, 3, 4, 5};
    short ar2[] = {1, 2, 5, 3, 4};

    int res = math::ar_compare(ar1, 5, ar2, 5);
    std::cout << res;

    return 0;
}