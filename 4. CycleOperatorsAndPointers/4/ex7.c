#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a;
    bool x = true;
    scanf("%d", &a);

    for(int i = 2; i < a; i++) 
    {
        if(a % i == 0) {
            x = false;
            break;
        }
    }

    if(x == true) printf("yes");
    else printf("no");

    return 0;
}