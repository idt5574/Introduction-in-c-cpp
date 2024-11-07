#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_ln(char* buffer, size_t max_len)
{
    fgets(buffer, max_len-1, stdin);
    char* ptr_n = strrchr(buffer, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';
}

char * merge_string(const char* str1, const char* str2)
{
    char* new_str = malloc((strlen(str1) + strlen(str2) + 1) * sizeof(char));

    for(int i = 0; i < strlen(str1) + strlen(str2); i++)
    {
        if(i < strlen(str1)) new_str[i] = str1[i];
        else if(i < strlen(str1) + strlen(str2)) new_str[i] = str2[i - strlen(str1)];
    }
    new_str[strlen(str1) + strlen(str2)] = '\0';

    return new_str;
}

int main(void)
{
    char str_1[200] = {0};
    char str_2[200] = {0};

    get_ln(str_1, sizeof(str_1));
    get_ln(str_2, sizeof(str_2));

    char* new_str = merge_string(str_1, str_2);

    printf("%s", new_str);

    return 0;
}