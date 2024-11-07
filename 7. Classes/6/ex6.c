#include <stdio.h>
#include <string.h>

struct tag_fio
{
    char firstname[50];
    char otch[50];
    char lastname[50];
};

struct tag_student
{
    struct tag_fio fio;
    short old;
    short height;
    short weight;
};


void getline(char* buffer, size_t max_len)
{
    fgets(buffer, max_len-1, stdin);
    char* ptr_n = strrchr(buffer, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';
}

int main(void)
{
    char fname[50], otch[50], lname[50]; // имя, отчество, фамилия
    short old, height, weight; // возраст, высота, вес

    getline(fname, sizeof(fname));
    getline(otch, sizeof(otch));
    getline(lname, sizeof(lname));

    scanf("%hd, %hd, %hd", &old, &height, &weight);

    struct tag_student st = {.old = old, .height = height, .weight = weight};
    strcpy(st.fio.firstname, fname);
    strcpy(st.fio.otch, otch);
    strcpy(st.fio.lastname, lname);

    return 0;
}