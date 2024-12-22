#include <iostream>

#define compare(a, b, type) type == sort_asc ? a > b : a < b

using type_sort = enum{sort_asc, sort_desc};

int sort(short* ar, size_t len, type_sort type = sort_asc)
{
    int return_value = 0;
    short* copy_ar = (short*)malloc(sizeof(short) * len);
    memcpy(copy_ar, ar, sizeof(short) * len);

    for(int i = 0; i < len - 1; i++)
        for(int j = i + 1; j < len; j++)
            if(compare(ar[i], ar[j], type)) 
            {
                int temp = ar[i]; 
                ar[i] = ar[j]; 
                ar[j] = temp; 
            }

    for(int i = 0; i < len; i++) if(ar[i] != copy_ar[i]) return_value++;
    free(copy_ar);

    return return_value;
}

int main()
{
    short ar[] = {3, 2, 4, 5};

    int res = sort(ar, sizeof(ar) / sizeof(*ar));
    
    std::cout << res << ':' << std::endl;
    for(int i = 0; i < sizeof(ar) / sizeof(*ar); i++) std::cout << ar[i] << ' ';

    return 0;
}