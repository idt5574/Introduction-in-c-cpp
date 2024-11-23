#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TOTAL   10

int main(void)
{
    int x = 0;
    char al[] = "0123456789-";
    char tags[51 * 10] = {0};
    char str[TOTAL][50] = {"0"};
    int count = 0;
    while(count < TOTAL && fgets(str[count], sizeof(str)-1, stdin)) {
        char* ptr_n = strrchr(str[count], '\n');
        if(ptr_n != NULL)
            *ptr_n = '\0';
        count++;
    }

    for(int i = 0; i < TOTAL; i++) {
        if(strchr(str[i], ';') != NULL) {
            char *ptr_n = strchr(str[i], ';');
            while (strchr(al, *++ptr_n) == NULL);
            int cost = atoi(ptr_n);
            if(cost != 12300) {
                int j = 0;
                while (str[i][j] != ':')
                {
                    tags[x++] = str[i][j++];
                }
                tags[x++] = ' ';
            }
        }
    }

    printf("%s", tags);

    return 0;
}