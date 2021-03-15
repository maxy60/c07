void    ft_itoa(char *str,unsigned long long int nb)
{
    unsigned long long int div;
    unsigned long long int i;
    unsigned long long int nb2;
    unsigned long long int mod;

    while (nb > 0)
    {
        div = 10;
        nb2 = 0;
        i = 0;
        while ((nb / div) > 9)
            div = div * 10;
        nb2 = (nb / div);
        str[i] = nb2;
        i++;
        nb2 = (nb % mod);
        nb = (nb - nb2);
    }
}

#include <stdio.h>
int main()
{
    unsigned long long int nb = 54208;
    char *str;

    ft_itoa(str, nb);
    printf("%s", str);
}
