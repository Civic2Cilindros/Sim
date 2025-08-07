#include<unistd.h>

void    ft_putsrt(char *str)
{
    int     i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int     main()
{
    char    phrase[]="HONDA";
    ft_putsrt(phrase);
    return (0);
}