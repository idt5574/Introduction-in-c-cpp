#include <stdio.h>

int main(void)
{
    char data[5][10];

    for(int i = 0; i < 5; i++) scanf("%9s", data[i]);
    
    for(int i = 0; i < 5; i++) printf("[%s]\n", data[i]);

    return 0;
}