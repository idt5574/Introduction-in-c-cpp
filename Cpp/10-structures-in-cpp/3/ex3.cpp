#include <iostream>

struct money
{
private:
    int total_money;

public:
    money(int x) { total_money = x; }

    int get_money() { return total_money; }

    void set_money(int volume) { total_money = volume; }
};


int main()
{
    money rubs(100);

    std::cout << rubs.get_money();

    return 0;
}