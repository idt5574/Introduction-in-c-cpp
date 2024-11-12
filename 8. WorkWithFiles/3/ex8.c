#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tag_box
{
    unsigned int id;
    unsigned int width, height, depth;
    double weight;
} BOX;


int main(void)
{
    FILE* fp =  fopen("filex8.txt", "w"); // имитация отрытого файлового потока

    BOX new_box;

    scanf("%u; %u; %u; %u; %lf", &new_box.id, &new_box.width, &new_box.height, &new_box.depth, &new_box.weight);

    fprintf(fp, "box %u: %u x %u x %u", new_box.id, new_box.width, new_box.height, new_box.depth);

    fclose(fp); //закрывать стандартный поток не нужно

    return 0;
}