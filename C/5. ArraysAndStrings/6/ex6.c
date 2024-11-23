#include <stdio.h>

int main(void)
{
    char ar_2D[4][3];
    
    for(char i = 0; i < 4; i++)
        for(char j = 0; j < 3; j++)
            scanf("%d", &ar_2D[i][j]);
    
    for(char i = 0; i < 4; i++){
        for(char j = 0; j < 3; j++)
            printf("%d ", ar_2D[j][i]);
        printf("\n");
    }
    
    return 0;
}