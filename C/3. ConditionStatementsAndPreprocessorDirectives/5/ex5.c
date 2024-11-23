#include <stdio.h>

int main(void)
{
    unsigned char mask = 9;
    unsigned char bits;
    scanf("%hhu", &bits);

    unsigned char res = bits ^ mask;
    printf("%d", res);
    
    return 0;
}