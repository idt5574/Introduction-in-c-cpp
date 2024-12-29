#include <iostream>

enum data_type { data_none = 1, data_int, data_double };

struct point {
private:
    enum { max_coords = 3 };

    union {
        int v_int;
        double v_double;
    } coords[max_coords];

    data_type type = data_none;

public:
    void set_coords(int x, int y, int z)
    {
        coords[0].v_int = x;
        coords[1].v_int = y;
        coords[2].v_int = z;

        type = data_int;
    }

    void set_coords(double x, double y, double z)
    {
        coords[0].v_double = x;
        coords[1].v_double = y;
        coords[2].v_double = z;

        type = data_double;
    }

    data_type get_type() {return type;}

    int get_size() {return max_coords;}

    bool get_coords(int& x, int& y, int& z)
    {
        if(type != data_int) return false;

        x = coords[0].v_int;
        y = coords[1].v_int;
        z = coords[2].v_int;

        return true;
    }

    bool get_coords(double& x, double& y, double& z)
    {
        if(type != data_double) return false;

        x = coords[0].v_double;
        y = coords[1].v_double;
        z = coords[2].v_double;

        return true;
    }
};

int main()
{
    point pt;
    pt.set_coords(5, -8, 34);

    int a, b, c;
    
    pt.get_coords(a, b, c);

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << a << ' ' << b << ' ' << c << std::endl;
    // __ASSERT_TESTS__
    return 0;
}