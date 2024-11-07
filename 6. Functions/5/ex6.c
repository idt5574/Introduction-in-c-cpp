#include <stdio.h>
#include <string.h>

int match_ab(const char a, const char b)
{
    if(a != ' ' && b != ' ') 
        return a < b;
    else if(a == ' ')
        if(b >= '0' && b <= '9')
            return 0;
        else return 1;
    else if(b == ' ')
        if(a >= '0' && a <= '9')
            return 1;
        else return 0;
}


void sort_string(char *str, size_t max_len, int (*func) (const char, const char))
{
    for(int i = 0; i < max_len; i++) 
        for(int j = i; j < max_len; j++) 
            if(!func(str[i], str[j])) 
            {
                int tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
}

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    sort_string(str, strlen(str), &match_ab);
    printf("%s", str);

    return 0;
}