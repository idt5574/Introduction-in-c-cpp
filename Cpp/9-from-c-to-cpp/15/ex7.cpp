#include <iostream>

enum {max_size = 20};

inline void reverse(short* ar, size_t len_ar)
{
    for(int i = 0; i < len_ar / 2; i++)
    {
        short temp = ar[i];
        ar[i] = ar[len_ar - i - 1];
        ar[len_ar - i - 1] = temp;
    }
}

int main()
{
    short digs[max_size];
    int count = 0;
    while(count < max_size && std::cin >> digs[count])
        count++;

    reverse(digs, count);

    for(int i = 0; i < count; i++) std::cout << digs[i] << ' ';

    return 0;
}