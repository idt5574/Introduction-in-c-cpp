#include <iostream>
#include <math.h>

using point = struct {
    int x, y;
};

double get_length(point p1, point p2)
{
    return sqrt(pow((double)p2.x - (double)p1.x, 2.0) + pow((double)p2.y - (double)p1.y, 2.0));
}

double sq_tr(point p1, point p2, point p3)
{
    const double len_a = get_length(p1, p2);
    const double len_b = get_length(p2, p3);
    const double len_c = get_length(p3, p1);

    const double half_meter = (len_a + len_b + len_c) / 2.0;

    return sqrt(half_meter * (half_meter - len_a) * (half_meter - len_b) * (half_meter - len_c));
}

int main()
{
    point p1, p2, p3;
    
    std::cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

    double res = sq_tr(p1, p2, p3);

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << res << std::endl;

    return 0;
}