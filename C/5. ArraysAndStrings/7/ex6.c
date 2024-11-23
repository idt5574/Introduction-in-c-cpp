#include <stdio.h>

int main(void)
{
    char str[100] = "Best string!";

    for(int i = 0; i < 13; i++) {
        if(str[i] == 's')
            for(int j = i; j < 13; j++)
                str[j] = str[j + 1];
    }

    return 0;
}