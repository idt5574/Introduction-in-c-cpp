#include <iostream>

struct point
{
private:
    int x, y;

public:
    int get_x() {return x;}
    int get_y() {return y;}

    void get_coords(int& x, int& y)
    {
        x = this->x;
        y = this->y;
    }

    void set_coords(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    static point sum(point& p1, point& p2)
    {
        point new_point;
        new_point.set_coords(p1.get_x() + p2.get_x(), p1.get_y() + p2.get_y());
        return new_point;
    }
};

int main()
{
    int x1, y1, x2, y2;
    point p1, p2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    p1.set_coords(x1, y1);
    p2.set_coords(x2, y2);

    std::cout << p1.sum(p1, p2).get_x() << ' ' << p1.sum(p1, p2).get_y() << std::endl;

    return 0;
}

