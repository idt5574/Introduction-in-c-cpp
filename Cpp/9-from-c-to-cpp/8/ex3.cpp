#include <iostream>

enum { total_marks=23 };

int main()
{
    short marks[total_marks] = {0};
    int count {0};

    while (count < total_marks && std::cin >> marks[count])
    {
        if(marks[count] < 3)
            marks[count] = 0;

        count++;
    }
    
    for(int i = 0; i < total_marks; i++)
        std::cout << marks[i] << ' ';

    std::cout << std::endl;

    return 0;
}