#include <stdio.h>
#include <stdlib.h>

struct tag_rub
{
    double ratio_usd;
    int rubs;
};

int main(void)
{
    struct tag_rub* account_r = malloc(sizeof(struct tag_rub));
    account_r->ratio_usd = 91.32;
    scanf("%d", &account_r->rubs);
    printf("%.2f", (double)account_r->rubs / account_r->ratio_usd);

    free(account_r);
    return 0;
}