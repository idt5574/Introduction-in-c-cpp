#include <iostream>

enum {max_size = 20};

bool is_even(int a)
{
    return a % 2 == 0;
}

int sum_ar(const int *ar, size_t len_ar, bool (*num_fits) (int))
{
    int sum = 0;

    for(int i = 0; i < len_ar; i++)
        if(num_fits(ar[i])) sum += ar[i];

    return sum;   
}

int main()
{
    int marks[max_size] = {0};
    int x = 0;
    while(x < max_size && std::cin >> marks[x]) 
        x++;

    std::cout << sum_ar(marks, x, &is_even);

    return 0;
}