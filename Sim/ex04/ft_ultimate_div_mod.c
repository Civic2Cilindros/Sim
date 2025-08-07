#include<stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     dividend = *a;

    int     divisor = *b;

    int     result = dividend / divisor;

    int     rest = dividend % divisor;

    *a = result;
    *b = rest;
}

int     main()
{
    int     a = 10;

    int     b = 5;
    ft_ultimate_div_mod(&a, &b);
    printf("Resultado:%d", a);
    printf("Resto:%d", b);
    return (0);
}