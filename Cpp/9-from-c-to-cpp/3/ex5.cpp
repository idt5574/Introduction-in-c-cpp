#include <iostream>

enum {max_size_ar=20};

int main()
{
    int data[max_size_ar];
    int i = 0;

    while (i < max_size_ar && std::cin >> data[i])
        i++;
    

    for(int j = 0; j < i; j++)
        std::cout << data[j] << " ";

    std::cout << std::endl;

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}