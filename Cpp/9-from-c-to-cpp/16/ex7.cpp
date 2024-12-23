#include <iostream>

enum {max_length_ar = 20};
using filter_func = bool (*)(int, int);

int sum_elem(const int* ar, size_t len, filter_func filter)
{
    int sum = 0;
    for(int i = 1; i < len; i++)
        if(filter(ar[i - 1], ar[i]))
            sum += ar[i];
    return sum;
}

int main(void)
{
    int marks[max_length_ar] = {0};
    int count = 0;
    while(count < max_length_ar && std::cin >> marks[count])
        count++;

    std::cout << sum_elem(marks, count, [] (int a, int b) {return (a % 2 == 0 && b % 3 == 0);});

    return 0;
}