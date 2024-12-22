#include <iostream>

using calc_type = enum{calc_perimetr, calc_square};

int get_rect(int width, int length, calc_type type = calc_perimetr)
{
    if(type == calc_perimetr)
        return 2 * (width + length);
    return width * length;
}

double get_rect(double width, double length, calc_type type = calc_perimetr)
{
    if(type == calc_perimetr)
        return 2 * (width + length);
    return width * length;
}

int main()
{
    

    return 0;
}