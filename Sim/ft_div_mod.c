#include<stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;

    *mod = a % b;
}

int     main()
{
    int     a = 10;

    int     b = 5;

    int     result;

    int     rest;

    ft_div_mod(a, b, &result, &rest);
    printf("Primeiro numero:%d\n", a);
    printf("Primeiro numero:%d\n", b);
    printf("Resultado:%d\n", result);
    printf("Resto:%d\n", rest);
    return (0);
    
}