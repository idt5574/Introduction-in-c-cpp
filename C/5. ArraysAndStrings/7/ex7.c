#include <stdio.h>

int main(void)
{
    char str[50] = "best string!";

    for(int i = (sizeof(str) / sizeof(char)) - 1; i >= 4 ; i--) {
        str[i] = str[i - 4];
    }

    str[3] = ' ';
    str[2] = 'e';
    str[1] = 'h';
    str[0] = 'T';

    return 0;
}