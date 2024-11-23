#include <stdio.h>
#include <string.h>

int main(void)
{
    char value = 0;
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    while(strstr(str, "is") != 0) {
        char *index = strstr(str, "is");
        *index = '1';
        value++;
    }

    printf("%d", value);

    return 0;
}