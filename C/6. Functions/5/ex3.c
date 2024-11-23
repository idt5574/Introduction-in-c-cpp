#include <stdio.h>
#include <string.h>

int isRight(const char a)
{
    return !((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}

void copy_string(char* dst, size_t max_len_dst, const char* src, int (*func) (const char))
{
    short j = 0;
    for(int i = 0; j < max_len_dst - 1 && src[i]; i++) 
        if(func(src[i])) dst[j++] = src[i]; 
    dst[j] = '\0';
}

int main(void)
{
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    copy_string(str2, sizeof(str2), str, isRight);
    puts(str2);

    return 0;
}