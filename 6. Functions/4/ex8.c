#include <stdio.h>

#define SIZE    3

void show_pole(const char (*ar)[SIZE])
{
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            if(j != SIZE - 1) printf(ar[i][j] == 0 ? "# " : "%c ", ar[i][j]);
            else printf(ar[i][j] == 0 ? "#\n" : "%c\n", ar[i][j]);
}

int main(void)
{
    char pole[SIZE][SIZE] = {0};
    char* ptr_p = &pole[0][0];
    int count = 0;
    int val = 0;

    while(count < SIZE * SIZE && scanf("%d", &val) == 1) {
        *ptr_p = (val == 1) ? 'x' : (val == 2) ? 'o': val;
        ptr_p++;
        count++;
    }

    show_pole(&pole[0]);

    return 0;
}