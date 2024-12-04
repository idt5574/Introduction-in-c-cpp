#include <iostream>

int main()
{
    int a;
    bool fl_even = true;

    while(std::cin >> a && a != 0)
        if(a % 2 != 0)
            fl_even = false;

    if(fl_even)
        std::cout << "even" << std::endl;
    else
        std::cout << "no" << std::endl;

    return 0;
}