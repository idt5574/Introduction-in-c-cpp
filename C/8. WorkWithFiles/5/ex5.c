#include <stdio.h>

int main(void)
{
    short data[10] = {0};
    int i = 0;
    FILE* fp = fopen("file5", "rb"); // имитация входного потока

    while (fread(&data[i], sizeof(short), 1, fp) == 1)
        i++;
    
    for(int j = 0; j < i; j++)
        printf("%d ", data[j]);

    // fclose(fp);

    return 0;
}