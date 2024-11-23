#include <iostream>
using namespace std;

enum {max_size_ar=20};

int main()
{
    short data[max_size_ar];
    short count = 0;

    /* Способ 1
    char c;
    while (count < max_size_ar && std::cin >> data[count] >> c)
        count++;

    for(int i = 0; i <= count; i++)
        std::cout << data[i] << ' ';
    */

    while (cin >> data[count]) {
        if (cin.peek() == ';') {
            cin.ignore(); // Пропускаем запятую
        } 
        count++;
    }

    for(int i = 0; i < count; i++)
        std::cout << data[i] << ' ';
 
    std::cout << std::endl;

    return 0;
}