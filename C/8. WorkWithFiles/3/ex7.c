#include <stdio.h>

enum {max_length_ar=20};

int main(void)
{
    double temp[max_length_ar] = {0.0};
    unsigned i = 0;

    FILE* fp = fopen("filex7.csv", "r"); // имитация отрытого файлового потока
    
    if(fp == NULL)
    {
        perror("filex7.csv");
        return 1;
    }

    while (i < 20 && fscanf(fp, "%lf ", &temp[i]) == 1)
        i++;
    

    for(int j = 0; j < i; j++)
        printf(temp[j] < 0 ? "" : "%.2f ", temp[j]);

    fclose(fp); //закрывать стандартный поток не нужно

    return 0;
}