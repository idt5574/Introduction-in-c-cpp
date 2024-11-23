    #include <stdio.h>
    #include <string.h>
    #include <stdarg.h>
    #include <stdlib.h>

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

    int check_path(STATION* path[], STATION* check, int *count_st)
    {
        printf("Path cheking... (%s)\n", check->name);
        int flag = 0;
        if(count_st != 0)
            for(int i = 0; i < *count_st; i++)
            {
                printf("...\n");
                if(strcmp(path[i]->name, check->name) == 0)
                {
                    flag = 1;
                    printf("%s already in path\n", check->name);
                    return flag;
                }
            }
        printf("%s not in path\n", check->name);
        return flag;
    }

    void set_station_links(STATION* st, int count_links, ...)
    {
        //printf("\nLinking %s started...\n", st->name);
        va_list arg;
        va_start(arg, count_links);

        for(int i = 0; i < count_links; i++)
        {
            STATION* temp = va_arg(arg, STATION*);
            if(check_link(st, temp) == 0)
            {
                st->links[st->count_links++] = temp;
                //printf("\n%s linked to %s, %s count links = %d\n", temp->name, st->name, st->name, st->count_links);
                temp->links[temp->count_links++] = st;
                //printf("%s linked to %s, %s count links = %d\n", st->name, temp->name, temp->name, temp->count_links);
            } else {
                //printf("\n%s is already linked to %s\n", temp->name, st->name);
            }
        }
    }

    void pop(STATION** ar)
    {
        STATION INFI = {.name = "INF"};
        int i = 0;

        while (strcmp(ar[i]->name, INFI.name) != 0 && i < 10)
        {
            ar[i] = ar[i + 1];
            i++;
        }

        while (i < 10)
        {
            ar[i++] = &INFI;
        }
    };

    void push(STATION** ar, STATION* arg)
    {
        STATION INFI = {.name = "INF"};
        for(int i = 0; i < 10; i++)
            if(strcmp(ar[i]->name, INFI.name) == 0)
            {
                ar[i] = arg;
                return;
            }
    }

    void find_path(STATION* from, STATION* to, STATION *path[], int* count_st)
    {
        STATION INFI = {.name = "INF"};
        int inf = 1010;
        int* dist = malloc(10 * sizeof(int));
        
        for(int i = 0; i < 10; i++)
            dist[i] = inf;
        
        int ind1;
        int ind2;
        STATION* q[10] = {&INFI, &INFI, &INFI, &INFI, &INFI, &INFI, &INFI, &INFI, &INFI, &INFI};

        sscanf(from->name, "St #%d", &ind1);
        dist[ind1 - 1] = 0;

        q[0] = from;
        
        while (strcmp(q[0]->name, INFI.name) != 0)
        {
            STATION* v = q[0];
            pop(q);

            for(int i = 0; i < v->count_links; i++)
            {
                sscanf(v->links[i]->name, "St #%d", &ind1);
                sscanf(v->name, "St #%d", &ind2);
                if(dist[ind1 - 1] == inf)
                {
                    dist[ind1 - 1] = dist[ind2 - 1] + 1;
                    int temp;
                    sscanf(v->name, "St #%d", &temp);
                    v->links[i]->fl_reserved = temp;
                    push(q, v->links[i]);
                }
            }
        }

        int ind;
        sscanf(to->name, "St #%d", &ind);
        *count_st = dist[ind - 1] + 1;
        path[*count_st - 1] = to;
        
        for(int i = *count_st - 2; i >= 0; i--)
        {
            int temp2;
            int temp1 = to->fl_reserved;

            for(int j = 0; j < to->count_links; j++)
            {
                sscanf(to->links[j]->name, "St #%d", &temp2);
                
                if(temp1 == temp2)
                {
                    to = to->links[j];
                    break;
                }
            }
            path[i] = to;
            sscanf(to->name, "St #%d", &temp1);
            sscanf(from->name, "St #%d", &temp2);
            if(temp1 == temp2) 
                break;
            
        }
    }

    int main(void)
    {
        STATION st[10] = {
            {"St #1\0", .count_links=0, .fl_reserved=0},
            {"St #2\0", .count_links=0, .fl_reserved=0},
            {"St #3\0", .count_links=0, .fl_reserved=0},
            {"St #4\0", .count_links=0, .fl_reserved=0},
            {"St #5\0", .count_links=0, .fl_reserved=0},
            {"St #6\0", .count_links=0, .fl_reserved=0},
            {"St #7\0", .count_links=0, .fl_reserved=0},
            {"St #8\0", .count_links=0, .fl_reserved=0},
            {"St #9\0", .count_links=0, .fl_reserved=0},
            {"St #10\0", .count_links=0, .fl_reserved=0},
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

        STATION* path[max_path_station];
        STATION* start = &st[0];
        STATION* end = &st[9];

        int count_st;    

        find_path(start, end, path, &count_st);

        for(int i = 0; i < count_st; ++i)
            printf("[%s] ", path[i]->name);

        //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
        return 0;
    }