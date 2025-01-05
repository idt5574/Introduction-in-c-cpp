#include <iostream>

struct vector
{
    int x, y, z;

    ~vector()
    {
        std::cout << "Deleted vector: " << x << ", " << y << ", " << z << std::endl;
    }
};


int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;

    vector* obj { new vector{x, y, z} };

    delete obj;

    return 0;
}