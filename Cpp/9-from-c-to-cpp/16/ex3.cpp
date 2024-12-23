#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    auto sq_tr = [] (int a, int b, int c) {
        double p = (a + b + c) / 2.0;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    };


    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << sq_tr(a, b, c);

    return 0;
}