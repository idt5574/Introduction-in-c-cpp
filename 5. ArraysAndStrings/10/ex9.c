#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    bool flag = 0;
    char al[65] = "abcdefghijkmnlopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789._-";
    char al_end[65] = "abcdefghijkmnlopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_-";
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    char *ptr_symb1 = strchr(str, '@'), *ptr_symb2 = strrchr(str, '@');

    if(ptr_symb1 == ptr_symb2) {
        char right = 0;
        char temp_str[100] = {0};
        char temp_end[100] = {0};
        strcpy(temp_end, ++ptr_symb2);
        for(int i = 0; i < sizeof(str); i++) 
            if(str[i] != '@') right++;
            else break;
        strncpy(temp_str, str, right);
        for(int i = 0; i < sizeof(temp_str); i++) if(strchr(al, temp_str[i]) == 0) goto NOMATCH;
        for(int i = 0; i < strlen(temp_end); i++) {
            if(i == 0 && temp_end[i] == '.') goto NOMATCH;
            if(i > 0 && temp_end[i] == '.' && flag == 0) {
                flag = 1;
                continue;
            }
            else if(i > 0 && temp_end[i] == '.' && flag == 1) goto NOMATCH;
            if(strchr(al_end, temp_end[i]) == 0) goto NOMATCH;
        }
        if(flag == 0) goto NOMATCH;
    } else {
        NOMATCH: ;
        printf("0");
        return 0;
    }

    printf("1");

    return 0;
}