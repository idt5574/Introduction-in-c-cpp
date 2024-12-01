#include <iostream>

namespace array_alg {

    namespace filter_func {
        
        int even(int a) {
            return a % 2 == 0;
        }
        
    }

    typedef int (*PTR_FILTER_FUNC) (int);

    int filter_int(int* ar, size_t len_ar, PTR_FILTER_FUNC func) {
        for(int i = 0; i < len_ar; i++)
            if(!func(ar[i])) {
                for(int j = i--; j < len_ar - 1; j++) 
                    ar[j] = ar[j + 1];
                len_ar--;
            }
        return len_ar;   
    }
}

int main()
{
    int ar[20];
    int count = 0;

    while (count < 20 && std::cin >> ar[count])
        count++;

    int newSize = array_alg::filter_int(ar, count, array_alg::filter_func::even);

    for(int i = 0; i < newSize; i++)
        std::cout << ar[i] << ' ';

    std::cout << std::endl;

    return 0;
}