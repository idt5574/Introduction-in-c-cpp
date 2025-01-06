#include <iostream>
#include <memory>

struct thing
{
    unsigned long uid;
    unsigned width, height, depth;
};


int main()
{
    std::unique_ptr<thing> p_th {std::make_unique<thing>(1, 10, 43, 108)};

    // __ASSERT_TESTS__

    return 0;
}