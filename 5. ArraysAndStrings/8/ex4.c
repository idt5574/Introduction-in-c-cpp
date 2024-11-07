#include <stdio.h>

int main(void)
{
    char data[6][21];

    for(int i = 0; i < 6; i++) scanf("%20s", data[i]);
    
    for(int i = 5; i >= 0; i--) printf("%s ", data[i]);

    return 0;
}