#include <iostream>
#include <cmath>

struct vector4D
{
    double x, y, z, t;

    void read_data(FILE* stream, char sep = ' ') {
        char mask[50];
        sprintf(mask, "%s%c %s%c %s%c %s", "%lf",sep,"%lf", sep,"%lf", sep,"%lf");
        fscanf(stream, mask, &x, &y, &z, &t);
    }

    double length() {
        return sqrt(x * x + y * y + z * z + t * t);
    }
};


int main()
{
    vector4D v1, v2;

    v1.read_data(stdin, ';');
    v2.read_data(stdin, ';');


    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << v1.length() << ' ' << v2.length() << std::endl;

    return 0;
}