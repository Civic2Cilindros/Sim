#include<stdio.h>

int     ft_strlen(char *str)
{
    int     i = 0;

    while (str[i] != '\0')
    {   
        i++;
    }
    return (i);
}

int     main()
{
    int     tamanho;

    char   phrase[]= "Alexander";
    tamanho = ft_strlen(phrase);
    printf("Numero de caracteres:%d\n", tamanho);
    return (0);
}