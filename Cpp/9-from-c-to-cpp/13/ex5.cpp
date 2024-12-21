#include <iostream>
#include <math.h>

int get_square(int a, int b) {
    return a * b;
} 

double get_square(int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() 
{
    int a, b, c, d, e;

    std::cin >> a >> b >> c >> d >> e;
    double tr_sq = get_square(a, b, c);
    double pr_sq = get_square(d, e);

    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << tr_sq << ' ' << pr_sq << std::endl;

    return 0;
}