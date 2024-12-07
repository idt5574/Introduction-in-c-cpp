#include <iostream>
#include <math.h>

using POINT = struct {
    double x, y;
};

double get_length(POINT p1, POINT p2)
{
    return sqrt(pow(p2.x - p1.x, 2.0) + pow(p2.y - p1.y, 2.0));
}

int main()
{
    POINT p1 = {-2.5, 7.8},
        p2 = {11.4, 43.2};
    
    double len = get_length(p1, p2);

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << len << std::endl;

    return 0;
}