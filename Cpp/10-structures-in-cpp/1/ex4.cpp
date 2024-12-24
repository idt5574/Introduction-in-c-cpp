#include <iostream>

using std::endl;

enum {
    max_title = 200,
    max_author = 100
};

struct book
{
    char title[max_title];
    char author[max_author];
    int price;
    int npages;

    double price_per_page() {
        return (double)price / (double)npages;
    }
};

bool get_line(char* buff, size_t max_buff)
{
    std::string line;
    if(!getline(std::cin, line)) return false;

    int i = 0;
    for(;i < line.length() && i < max_buff-1; ++i)
        buff[i] = line[i];
    buff[i] = '\0';

    return true;
}

int main(void)
{
    book lib[10];
    short count = 0;

    while (count < 10)
    {
        if(!get_line(lib[count].title, max_title))
            break;

        if(!get_line(lib[count].author, max_author))
            break;

        if(!(std::cin >> lib[count].price))
            break;
        
        if(!(std::cin >> lib[count].npages))
            break;
        
        std::cin.ignore(1, '\n');
        count++;
    }

    std::cout << std::fixed;
    std::cout.precision(2);
    for(int i = 0; i < count; i++)
        std::cout << lib[i].price_per_page() << ' ';

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}