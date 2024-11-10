#include <stdio.h>

int main(void)
{
    char byte;
    FILE* fp = stdin; // стандартный поток для чтения данных

    while ((byte = fgetc(fp)) != EOF)
    {
        printf("%d:%d\n", byte, ftell(fp));
    }
    

    // fclose(fp); для стандартного потока делать не нужно

    return 0;
}