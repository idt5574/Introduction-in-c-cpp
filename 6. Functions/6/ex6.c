#include <stdio.h>
#include <string.h>

void strip_str(char (*str), char (*args))
{
    char* ptr_str = str;
    for(int i = 0; i < strlen(str); i++)
    {
        if(strpbrk(ptr_str, args) != NULL)
        {
            char *temp;
            char* stri = &str[i];
            strcpy(temp, stri);
            strcpy(ptr_str, temp);
        }
        ptr_str++;
    }
}

int main(void)
{
    char str[100] = {0}, str2[20] = ".,-!?";
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    strip_str(str, str2);
    printf("%s", str);

    return 0;
}
