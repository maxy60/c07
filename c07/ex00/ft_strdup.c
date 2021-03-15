#include <stdlib.h>
#include <string.h>
int ft_strlen(char *str)
{
    int a;

    a = 0;
    while(str[a] != '\0')
        a++;
    return (a);
}

char    *ft_strdup(char *source)
{
    char *cpy;
    int a;

    a = -1;

    if (!(cpy = (char *)malloc(sizeof(char) * ft_strlen(source) + 1)))
        return (NULL);
    while (source[a++])
        cpy[a] = source[a];
    cpy[a] = '\0';
    return (cpy);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_strdup(av[2]);
        strdup(av[2]);
    }
}
