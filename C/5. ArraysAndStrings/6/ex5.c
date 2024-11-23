#include <stdio.h>

int main(void)
{
    char ar_2D[3][3];

    for(char i = 0; i < 3; i++)
        for(char j = 0; j < 3; j++)
            scanf("%d", &ar_2D[i][j]);

    return 0;
}