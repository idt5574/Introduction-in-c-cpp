#include <iostream>
#include <memory>

int main(void)
{
    int x;
    std::cin >> x;

    std::shared_ptr<short> p_val {std::make_shared<short>()};
    *p_val = x;

    unsigned char* p = (unsigned char*) p_val.get();
    printf("%u %u", *p, *(p + 1));

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}