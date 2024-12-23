#include <iostream>

int main(void)
{
    int (*func_filter[]) (int) = {[] (int a) {return (a % 2 == 0? 1 : 0);},
                                    [] (int a) {return (a < 0 ? 1 : 0);},
                                    [] (int a) {return (a > 0 ? 1 : 0);}};
    
    int a;
    std::cin >> a;
    std::cout << func_filter[1] (a);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}