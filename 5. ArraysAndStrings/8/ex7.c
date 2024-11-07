#include <stdio.h>
#include <stdbool.h>

void strip_string(char* str, int max_len)
{
    int count = 0;
    while(*str++ != '\0' && count++ < max_len);

    if(count > 1) {
        str -= 2;
        if(*str == '\n')
            *str = '\0';
    }
}

int main(void)
{
    bool flag = true;
    char cnt = 0;
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));

    for(int i = 0; i < (sizeof(str) / sizeof(char) - 1); i++) {
        if(str[i] == '\0') break;
        if(str[i] != ' ' && flag) {
            flag = false;
            cnt++;  
        }
        else if(str[i] == ' ' && !flag)
            flag = true;
        if(cnt == 2) {
            while(str[i] != ' ' && str[i] != '\0'){
                printf("%c", str[i]);
                i++;
            }
            break;
        }
    }

    if(cnt == 1) printf("no");
    

    return 0;
}