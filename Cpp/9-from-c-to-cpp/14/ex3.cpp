#include <iostream>

using calc_type = enum{calc_perimetr, calc_square};

int get_rect_value(int a, int b, calc_type type = calc_perimetr)
{
    if(type == calc_perimetr)
        return ((a + b) * 2);
    return a * b;
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << get_rect_value(a, b);

    return 0;
}