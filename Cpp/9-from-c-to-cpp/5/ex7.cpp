#include <iostream>

namespace thing_alg {
    using THING = struct
    {
        char name[50];
        double weight;
    };

    enum {
        max_things = 20
    };

    void sort_things(THING* ar, size_t len)
    {
        for(int i = 0; i < len; i++)
                for(int j = 0; j < len - i - 1; j++)
                    if(ar[j].weight > ar[j + 1].weight)
                    {
                        THING temp = ar[j];
                        ar[j] = ar[j + 1];
                        ar[j + 1] = temp;
                    }
    }
}


int main()
{
    using namespace thing_alg;

    THING th[max_things];
    int count = 0;

    while (count < max_things && std::cin >> th[count].name >> th[count].weight)
        count++;

    sort_things(th, count);

    for(int i = 0; i < count; i++)
        std::cout << th[i].name << ' ';

    std::cout << std::endl;
    return 0;
}