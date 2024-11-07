#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char *index = strrchr(str, '\n');

    if(index != NULL) *index = '\0';

    printf("[%s]", str);

    return 0;
}