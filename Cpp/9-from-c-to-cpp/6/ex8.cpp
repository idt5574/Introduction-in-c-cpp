#include <iostream>

using std::cout;

enum {matrix_size=4};

int main()
{
    short matrix[matrix_size][matrix_size] = {0};
    int count_h = 0;
    int count_w = 0;

    while (std::cin >> matrix[count_h][count_w])
    {
        count_w++;

        if(count_w == 4) {
            count_w = 0;
            count_h++;
        }

        if(count_h == 4)
            break;
    }
    
    for(int i = 0; i < matrix_size; i++)
    {
        for(int j = 0; j < matrix_size; j++) {
            if(j < matrix_size - 1)
                cout << matrix[i][j] << ' ';
            else cout << matrix[i][j];
        }
        cout << '\n';
    }

    cout << std::endl;

    return 0;
}