#include <stdio.h>
#define MAX_LENGTH    20

size_t to_flat(short* v, /* массив, в который заносятся значения */
        size_t max_len_v, /* максимальная длина массива v */
        short* table[], /* массив на массив, из которого читаются значения */
        size_t len, /* длина массива table (первая размерность) */
        size_t count_v, /* число записанных в массив v значений (начальное значение 0) */
        size_t indx_t, /* индекс для перебора указателей (первой размерности) массива table (начальное значение 0) */
        size_t indx) /* индекс для перебора элементов массивов (условно, вторая размерность), 
                        на которые ссылается текущий указатель table[indx_t] (начальное значение 0)*/
{
    //printf("\nIN: count = %ld, [%ld][%ld], num = %d", count_v, indx_t, indx, table[indx_t][indx]);
    if(table[indx_t][indx] != 0) count_v++;
    char temp = count_v;
    if(count_v < max_len_v)
    {
        if(table[indx_t][indx] != 0)
                count_v = to_flat(v, max_len_v, table, len, count_v, indx_t, indx + 1); 
        else {
            count_v = to_flat(v, max_len_v, table, len, count_v, indx_t + 1, 0);
            return count_v;
        }
    }

    v[temp - 1] = table[indx_t][indx];
    //printf("\nOUT: count = %ld, [%ld][%ld], num = %d\n", count_v, indx_t, indx, table[indx_t][indx]);

    // if(table[indx_t][indx] != 0 && indx_t < len - 1 && indx == 0)
    //     count_v = to_flat(v, max_len_v, table, len, count_v, indx_t + 1, indx);
    // if(table[indx_t][indx] != 0)
    // {
    //     if(count_v < max_len_v){
    //         count_v = to_flat(v, max_len_v, table, len, count_v, indx_t, indx + 1);
    //         count_v++;
    //     } else count_v++;
    //     v[(max_len_v - count_v) + 1] = table[indx_t][indx];
    // }
    
    return count_v;
}

int main(void)
{
    short ar_1[] = {-4, 2, 3, 7, 0};
    short ar_2[] = {11, 6, 10, 8, 13, 98, -5, 0};
    short ar_3[] = {-47, 0};
    short ar_4[] = {8, 11, 56, -3, -2, 0};

    short * table[] = {ar_1, ar_4, ar_3, ar_2};
    short len = 0;

    for(int i = 0; i < sizeof(table) / sizeof(*table); i++)
    {
        int j = 0;
        while (1)
        {
            if(table[i][j] != 0)
            {
                len++;
                j++;
            } else break;
        }
        
    }

    //printf("\n%d\n", len);

    short flat[MAX_LENGTH];

    size_t cnt = to_flat(flat, (len < MAX_LENGTH) ? len : MAX_LENGTH, table, sizeof(table) / sizeof(*table), 0, 0, 0);

    for(int i = 0; i < cnt; ++i)
        printf("%d ", flat[i]);

    printf("\n");
    return 0;
}