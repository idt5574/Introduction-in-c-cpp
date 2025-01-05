#include <iostream>
#include <cstring>

struct thing {
    unsigned long id;
    char name[50];
    unsigned int price;
    double weight;

    unsigned long id_giver() {
        static unsigned long next_id = 1;
        return next_id++;
    }

    thing(char name[50] = "", unsigned int price = 0, double weight = 0.0)
    {
        strcpy(this->name, name);
        this->price = price;
        this->weight = weight;
        id = id_giver();
    }
};

int main()
{
    char name[50];
    unsigned int price;
    double weight;

    std::cin >> name >> price >> weight;

    thing* ptr_th = new thing(name, price, weight);
    std::cout << ptr_th->price << std::endl;

    delete ptr_th;

    return 0;
}