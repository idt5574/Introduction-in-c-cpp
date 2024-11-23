#include <stdio.h>

int main(void) {
    
    int n, s = 0;
    while(scanf("%1d", &n) == 1)
        s += n;
    printf("%d", s);
        
    return 0;
}


