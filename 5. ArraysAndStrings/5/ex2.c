#include <stdio.h>

#define SIZE_BUFFER     128

int main(void)
{
    int buffer[SIZE_BUFFER];
    size_t count = 0;
    size_t sz_ar = sizeof(buffer) / sizeof(*buffer);

    while(count < sz_ar && scanf("%d", &buffer[count]) == 1)
        count++;

    for(int i = 0; i < count / 2; i++) {
        int t = buffer[i];
        buffer[i] = buffer[count % 2 == 0 ? i + (count / 2) : i + ((count / 2) + 1)];
        buffer[count % 2 == 0 ? i + (count / 2) : i + ((count / 2) + 1)] = t;
    }

    for(int i = 0; i < count; i++) printf("%d ", buffer[i]);

    return 0;
}