#include <iostream>

struct volume
{
    int width, height, depth;

    int get_volume() {
        return width * height * depth;
    }
};

int main()
{
    volume data;

    std::cin >> data.width >> data.height >> data.depth;

    std::cout << data.get_volume();

    return 0;
}