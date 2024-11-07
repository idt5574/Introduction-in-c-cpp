#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    ptr_n = str;
    while (ptr_n != NULL)
    {
        ptr_n = strchr(ptr_n, '-');
        if(ptr_n != NULL) {
            char temp[100] = {};
            strcpy(temp, ptr_n);
            strcpy(ptr_n, "-+-");
            ptr_n += 2;
            strcpy(ptr_n, temp);
            ptr_n++;
        }
    }
    
    printf("%s", str);
    
    return 0;
}