#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[512];
    short flag = 0;
    short count = 0;

    FILE* fp = fopen("filex.txt", "r"); // имитация отрытого файлового входного потока

    fgets(buff, sizeof(buff), fp);

    for(int i = 0; i < sizeof(buff); i++)
    {
        //printf("%d) %c\n", i, buff[i]);
        if(buff[i] == '\0')
        {
            count += flag == 0 ? 0 : 1;
            break;
        }
        if(buff[i] != ' ' && flag == 0)
            flag = 1;
        else if(buff[i] == ' ' && flag == 1)
        {   
            flag = 0;
            count++;
        }
    }

    printf("%d", count);

    fclose(fp); //закрывать стандартный поток не нужно

    return 0;
}