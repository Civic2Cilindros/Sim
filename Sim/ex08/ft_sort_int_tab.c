#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;

    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }
}

int main()
{
    int arr[] = {3, 4, 1, 2};
    int size = 4;
    int i = 0;

    ft_rev_int_tab(arr, size);

    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}