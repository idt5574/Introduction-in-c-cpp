#include <iostream>

int main()
{
    int a;
    bool fl_even = false;

    while(std::cin >> a && a != 0)
        if(a % 2 == 0)
            fl_even = true;

    if(fl_even)
        std::cout << "even" << std::endl;
    else
        std::cout << "no" << std::endl;

    return 0;
}