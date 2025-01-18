#include <stdio.h>

typedef struct
{
    unsigned old : 7;
    unsigned salary : 20;
    unsigned height : 8;
    unsigned weight : 7;
} PERSON_DATA;

int main(void)
{
    PERSON_DATA pd = {45, 876043, 186, 83};
    printf("%d", sizeof(pd));

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}