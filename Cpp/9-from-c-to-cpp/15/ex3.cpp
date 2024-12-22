#include <iostream>

inline int get_max_3(int a, int b, int c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c); 
}

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << get_max_3(a, b, c) << std::endl;

    return 0;
}