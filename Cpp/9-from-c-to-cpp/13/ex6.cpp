#include <iostream>

int min2(int a, int b) {
    return a < b ? a : b;
}

double min2(double a, double b) {
    return a < b ? a : b;
}

int main()
{
    int a;
    double b;
    std::cin >> a >> b;

    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << min2((double)a, b);

    return 0;
}