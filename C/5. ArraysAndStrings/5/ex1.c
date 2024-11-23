#include <stdio.h>

int main(void)
{
    short ar[10], marks[5];
    size_t count = 0;
    size_t sz_ar = sizeof(ar) / sizeof(*ar);
    size_t sz_marks = sizeof(marks) / sizeof(*marks);

    while(count < sz_ar && scanf("%hd", &ar[count]) == 1)
        count++;

    for(int i = 0; i < (count < sz_marks ? count : sz_marks); i++)
        marks[i] = ar[count - (i + 1)];

    for(int i = 0; i < (count < sz_marks ? count : sz_marks); i++)
        printf("%d ", marks[i]);

    return 0;
}