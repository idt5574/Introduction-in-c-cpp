#include <stdio.h>
#define MAX_SIZE    20

void reverse(short (*ar), short cnt)
{
    for(int i = 0, j = cnt - 1; i < cnt / 2; i++, j--)
    {
        int tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;
    }
}

int main(void)
{
    short digs[MAX_SIZE];
    int count = 0;
    while(count < MAX_SIZE && scanf("%hd", &digs[count]) == 1)
        count++;

    reverse(digs, count);

    for(int i = 0; i < count; i++) printf("%d ", digs[i]);

    return 0;
}