#include <iostream>

int main(void)
{
    int w, h;
    std::cin >> w >> h;

    auto sum_ab = [w, h] () {return w + h;};

    std::cout << sum_ab();

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}