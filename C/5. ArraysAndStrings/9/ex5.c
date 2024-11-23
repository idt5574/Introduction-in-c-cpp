#include <stdio.h>
#include <string.h>

int main(void)
{
    char ps[7][50];
    char ps_res[7 * 50];

    for(int i = 0; i < 7; i++) {
        scanf("%s", ps[i]);
        strcat(ps_res, ps[i]);
        strcat(ps_res, i == 6 ? "\0" : " ");
    }

    printf("%s", ps_res);    

    return 0;
}