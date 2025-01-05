#include <iostream>

struct complex {
    double re, im;
};

int main(void)
{
	complex* vc = new complex[7]();

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

   delete [] vc;

    return 0;
}
