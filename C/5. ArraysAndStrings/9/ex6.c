#include <stdio.h>
#include <string.h>

int main(void)
{
    char ps[7][50];
    char ps_res[7 * 51];

    for(int i = 0; i < 7; i++) {
        scanf("%s", ps[i]);
        if(strlen(ps[i]) % 2 == 0) {
            strcat(ps_res, ps[i]);
            ps_res[strlen(ps_res)] = ' ';
        }
    }
    ps_res[strlen(ps_res) - 1] = '\0';
    printf("%s", ps_res);    

    return 0;
}