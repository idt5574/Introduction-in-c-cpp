#include <stdio.h>

int main(void)
{
    char data[6][31];

    for(int i = 0; i < 6; i++) scanf("%30s", data[i]);
    
    for(int i = 0; i < 6; i++) printf(data[i][0] != 'G' ? "" : "%s ", data[i]);

    return 0;
}
