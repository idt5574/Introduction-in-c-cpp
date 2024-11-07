#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int i = -1;
    char al_char[] = "абвгдеёжзийклмнопрстуфхцчшщьыъэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧЩШЬЫЪЭЮЯ";
    char str[100] = {0};
    char res[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    ptr_n = &str[0];
    char *ptr_res = &res[0];

    while (*ptr_n != ' ')
    {
        *ptr_res++ = *ptr_n++;
    }

    *ptr_res++ = ':';
    
    while (*ptr_n != ' ')
    {
        *ptr_res++ = *ptr_n++;
    }

    printf("%s", res);

    return 0;
}