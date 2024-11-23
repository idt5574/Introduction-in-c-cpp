    #include <iostream>

    typedef struct tag_thing
    {
        unsigned int id;
        char name[50];
        double weight;
        unsigned int price;
    }THING;

    int main()
    {
        THING box;

        std::cin >> box.id >> box.name >> box.weight >> box.price;

        std::cout << box.name << ' ' << box.id << ": " << box.weight << ", " << box.price;

        return 0;
    }