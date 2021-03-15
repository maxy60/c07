#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *cpy;
    int a;

    if (min >= max)
    {
        cpy = NULL;
        return (cpy);
    }
    if (!(cpy = (int *)malloc(sizeof(int) * (max - min))))
        return (NULL);
    while (min < max)
    {
        cpy[a] = min;
        a++;
        min++;
    }
    return (cpy);
}
#include <stdio.h>
int main()
{
    printf("%ls\n", ft_range(100, 50));
}
