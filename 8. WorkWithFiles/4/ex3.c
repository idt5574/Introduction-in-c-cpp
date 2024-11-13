#include <stdio.h>
#include <string.h>

enum {max_lines=10, max_string_len=200};

int main(void)
{
    char text[max_lines][max_string_len];
    short i = 0;

    FILE* fp = fopen("file3.txt", "r"); // имитация отрытого файлового потока

    if(fp == NULL)
    {
        perror("file3.txt");
        return 1;
    }

    while (i < max_lines && !feof(fp))
    {
        fgets(text[i], sizeof(text[i]), fp);

        char* ptr;
        if((ptr = strchr(text[i], '\n')) != NULL)
        {
            *ptr = '\0';
        }
        i++;
    }

    for(int j = 0; j < i; j++)
        printf("%s\n", text[j]);  

    fclose(fp); //закрывать стандартный поток не нужно

    return 0;
}