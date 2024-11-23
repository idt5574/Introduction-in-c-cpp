#include <stdio.h>
#include <string.h>

int main(void)
{
    char str_city[10 * 51];
    char counter = 0;

    while (counter < 10)
    {
        char tmp[50] = {};
        if(scanf("%49s", tmp) != 0) {
            if(strstr(str_city, tmp) == NULL) {
                char* ptr_n = strrchr(tmp, '\n');
                if(ptr_n != NULL)
                   *ptr_n = '\0';
                strcat(str_city, tmp);
                strcat(str_city, " ");
            }
            counter++;
        }
    }
    
    printf("%s", str_city);

    return 0;
}