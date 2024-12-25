#include <iostream>
#include <cstring>

struct tag_price {
    char name[100];
    unsigned int rubs;
    unsigned char kops;
    unsigned int foreign_key;
};


int main(void)
{
    tag_price price_100;

    price_100.rubs = 100;
    price_100.kops = 5;
    price_100.foreign_key = 12;
    strcpy(price_100.name, "skibidi\0");

    tag_price pr = price_100;
    
    std::cout << pr.name << ' ' << pr.rubs << ' ' << (unsigned int)pr.kops << ' ' << pr.foreign_key << std::endl; 

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}