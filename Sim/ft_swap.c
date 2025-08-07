#include<stdio.h>

void    ft_swap(int *a, int *b)
{
    int     temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int     main()
{
    int     num[2] = {1, 2};
    printf("Antes da troca %d %d\n", num[0], num[1]);
    ft_swap(&num[0], &num[1]);
    printf("Depois da troca %d %d", num[0], num[1]);
    return (0);
}
