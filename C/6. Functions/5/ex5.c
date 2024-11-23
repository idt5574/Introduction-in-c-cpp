#include <stdio.h>

int is_odd(const int a)
{
    return a % 2 != 0;
}

int is_positive(const int a)
{
    return a >= 0;
}

int is_negative(const int a)
{
    return a <= 0;
}

int defit(const int a)
{
    return 1;
}

int sum_ar(const int *ar, size_t len_ar, int (*par)(const int))
{
    int res = 0, i = 0;
    for(int i = 0; i < len_ar; i++)
        res += par(ar[i]) ? ar[i] : 0;
    return res;
}


int main(void)
{
    // здесь массив указателей funcs на критериальные функции
    int marks[20] = {0};
    int i = 0;

    int item = 0;
    scanf("%d", &item); // выбор критерия суммирования

    int x;
    while(scanf("%d", &x) == 1 && i < 20) {
        marks[i++] = x;
    }

    int sum = 0; // переменная для хранения суммы
    switch(item) {
        case 1: sum = sum_ar(marks, i, *is_odd);
                break;
        case 2: sum = sum_ar(marks, i, *is_positive);
                break;// здесь вызов функции sum_ar со второй критериальной функцией
        case 3: sum = sum_ar(marks, i, *is_negative);
                break;// здесь вызов функции sum_ar с третьей критериальной функцией
        default: sum = sum_ar(marks, i, *defit);
                 // здесь вызов функции sum_ar с критериальной функцией deflt
    }

    printf("%d", sum);

    return 0;
}