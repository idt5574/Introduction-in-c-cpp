#include <stdio.h>

int main(void)
{
    char buff[512];
    int w, h;

    FILE* fp = fopen("filex6.txt", "r"); // имитация отрытого файлового потока

    fscanf(fp, "%d %d", &w, &h);

    printf("rectangle: %d; %d\n", w, h);

    fclose(fp);// закрывать стандартный поток не нужно

    return 0;
}