#include <stdio.h>
#include <string.h>

int main(void)
{
    char ps[7][50];
    char ps_sort[7 * 51];

    for(int i = 0; i < 7; i++) {
        scanf("%s", ps[i]);
    }

    for(int i = 0; i < 7; i++) {
        for(int j = i; j < 7; j++) {

            if(strlen(ps[j]) < strlen(ps[i])) {
                char temp[50];
                strcpy(temp, ps[i]);
                strcpy(ps[i], ps[j]);
                strcpy(ps[j], temp);
            }
        }
        strcat(ps_sort, ps[i]);
        ps_sort[strlen(ps_sort) + 1] = '\0';
        ps_sort[strlen(ps_sort)] = ' ';
    }

    ps_sort[strlen(ps_sort) - 1] = '\0';
    printf("%s", ps_sort);   

    return 0;
}