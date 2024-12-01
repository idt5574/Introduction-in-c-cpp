#include <iostream>

namespace array_alg {

    namespace filter_func {
        
        int mark_positive(int a) {
            return a >= 4;
        }
   
    }
    
    typedef int (*PTR_FILTER_FUNC) (int);

    size_t add_int(int* src, size_t start, size_t max_len_src, const int* dest, size_t len_dest, PTR_FILTER_FUNC func) {
        for(int i = 0; i < len_dest; i++) {
            if(start >= max_len_src)
                return start;

            if(func(dest[i])) {
                src[start++] = dest[i];
            }
        }
        return start;
    }
}

int main()
{
    int marks[25] = {3, 2, 5, 4, 3};
    int ar[20];
    int count = 0;

    while (count < 20 && std::cin >> ar[count])
        count++;
    
    int newSize = array_alg::add_int(marks, 5, 25, ar, count, array_alg::filter_func::mark_positive);

    for(int i = 0; i < newSize; i++)
        std::cout << marks[i] << ' ';

    std::cout << std::endl;

    return 0;
}