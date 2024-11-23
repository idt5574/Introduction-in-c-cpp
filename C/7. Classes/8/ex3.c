#include <stdio.h>
#include <string.h>
#include <stdarg.h>

enum {
    name_length = 50,
    total_links = 50, 
    max_path_station = 100
};

typedef struct tag_station
{
    char name[name_length];
    struct tag_station* links[total_links];
    short count_links;
    char fl_reserved;
} STATION;

int check_link(STATION* st, STATION* check)
{
    int flag = 0;
    for(int i = 0; i < st->count_links; i++)
    {
        if(strcmp(st->links[i]->name, check->name) == 0)
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

void set_station_links(STATION* st, int count_links, ...)
{
     printf("\nLinking %s started...\n", st->name);
    va_list arg;
    va_start(arg, count_links);

    for(int i = 0; i < count_links; i++)
    {
        STATION* temp = va_arg(arg, STATION*);
        if(check_link(st, temp) == 0)
        {
            st->links[st->count_links++] = temp;
            printf("\n%s linked to %s, %s count links = %d\n", temp->name, st->name, st->name, st->count_links);
            temp->links[temp->count_links++] = st;
            printf("%s linked to %s, %s count links = %d\n", st->name, temp->name, temp->name, temp->count_links);
        } else {
            printf("\n%s is already linked to %s\n", temp->name, st->name);
        }
    }
}

int main(void)
{
    STATION st[10] = {
        {"St #1", .count_links=0, .fl_reserved=0},
        {"St #2", .count_links=0, .fl_reserved=0},
        {"St #3", .count_links=0, .fl_reserved=0},
        {"St #4", .count_links=0, .fl_reserved=0},
        {"St #5", .count_links=0, .fl_reserved=0},
        {"St #6", .count_links=0, .fl_reserved=0},
        {"St #7", .count_links=0, .fl_reserved=0},
        {"St #8", .count_links=0, .fl_reserved=0},
        {"St #9", .count_links=0, .fl_reserved=0},
        {"St #10", .count_links=0, .fl_reserved=0},
    };

    set_station_links(&st[0], 2, &st[1], &st[2]);
    set_station_links(&st[1], 3, &st[0], &st[3], &st[4]);
    set_station_links(&st[2], 2, &st[0], &st[5]);
    set_station_links(&st[3], 2, &st[1], &st[5]);
    set_station_links(&st[4], 2, &st[1], &st[7]);
    set_station_links(&st[5], 4, &st[2], &st[3], &st[6], &st[8]);
    set_station_links(&st[6], 2, &st[5], &st[8]);
    set_station_links(&st[7], 2, &st[4], &st[8]);
    set_station_links(&st[8], 4, &st[5], &st[6], &st[7], &st[9]);
    set_station_links(&st[9], 1, &st[8]);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}