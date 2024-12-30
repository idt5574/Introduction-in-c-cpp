#include <iostream>
#include <cmath>

struct point3D
{
private:
    int x, y, z;

public:
    point3D() { x = 0; y = 0; z = 0; };

    point3D(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void get_coords(int& x, int& y, int& z)
    {
        x = this->x;
        y = this->y;
        z = this->z;
    }
};

struct line3D
{
private:
    point3D start_pt, end_pt;

public:
    line3D(point3D p1, point3D p2)
    {
        this->start_pt = p1;
        this->end_pt = p2;
    }

    ~line3D()
    {
        int x0, x1, y0, y1, z0, z1;
        start_pt.get_coords(x0, y0, z0);
        end_pt.get_coords(x1, y1, z1);

        printf("Deleted line: (%d, %d, %d) (%d, %d, %d)\n", x0, y0, z0, x1, y1, z1);
    }

    double length()
    {
        int x0, x1, y0, y1, z0, z1;
        start_pt.get_coords(x0, y0, z0);
        end_pt.get_coords(x1, y1, z1);

        return sqrt(pow(x0 - x1, 2) + pow(y0 - y1, 2) + pow(z0 - z1, 2));
    }

    const point3D& get_coords_start()
    {
        return start_pt;
    }

    const point3D& get_coords_end()
    {
        return end_pt;
    }
};


int main()
{
    line3D line(point3D(-5, 100, 45), point3D(0, 32, -42));

    return 0;
}