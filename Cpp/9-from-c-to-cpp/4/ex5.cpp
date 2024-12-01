#include <iostream>

namespace array_alg {
    typedef enum
    {
        sort_asc = 0,
        sort_desc = 1
    } TYPE_SORT;
    
    void sorted_int(int* ar, size_t len_ar, TYPE_SORT type) {
        if(type == 0) {
            for(int i = 0; i < len_ar; i++)
                for(int j = 0; j < len_ar - i - 1; j++)
                    if(ar[j] > ar[j + 1])
                    {
                        int temp = ar[j];
                        ar[j] = ar[j + 1];
                        ar[j + 1] = temp;
                    }
        } else {
            for(int i = 0; i < len_ar; i++)
                for(int j = 0; j < len_ar - i - 1; j++)
                    if(ar[j] < ar[j + 1])
                    {
                        int temp = ar[j];
                        ar[j] = ar[j + 1];
                        ar[j + 1] = temp;
                    }
        }
    }
}

int main()
{
    int ar[20];
    int count = 0;

    while (count < 20 && std::cin >> ar[count])
        count++;

    array_alg::sorted_int(ar, count, array_alg::sort_desc);
    
    for(int i = 0; i < count; i++)
        std::cout << ar[i] << ' ';

    std::cout << std::endl;
    return 0;
}