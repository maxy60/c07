#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *cpy;
    int a;

    a = 0;
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    if (!(cpy = malloc(sizeof(int) * (max - min))))
        return (-1);
    while (min < max)
    {
        tab[a] = min;
        min++;
        a++;
    }
    *range = tab;
    return(a);
}
