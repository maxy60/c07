/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:45:43 by msainton          #+#    #+#             */
/*   Updated: 2021/03/23 17:27:54 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_erreur2(char *str, char *base)
{
    int j;

    while (*str)
    {
		j = 0;
        while(*str != base[j])
        {
            if (base[j] == '\0')
			  return (1);
			j++;
        }
		str++;
    }
    return (0);
}

int        ft_atoi(char *str, unsigned int size, char *base)
{
    int i;
    int nbr;
    int sign;
    int compt;

    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    sign = 0;
    while (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            sign = 1 - sign;
    nbr = 0;
    while (str[i])
    {
	//	if(ft_erreur2(str, base) == 1)
	//		return (nbr);
        compt = 0;
        while (str[i] != base[compt])
            compt++;
        nbr = (nbr * size) + (str[i] - str[i]) + compt;
        i++;
    }
    if (sign)
        nbr *= -1;
    return (nbr);
}
int		ft_erreur(char *base)
{
	int a;
	int b;

	a = 0;
	if (base[a] == '\0' || base[a + 1] == '\0')
		return (1);
	while (base[a] != '\0')
	{
		b = a + 1;
		while (base[b] != '\0')
		{
			if (base[a] == base[b] || base[a] == '-' ||
					base[a] == '+' || base[b] == '-' || base[b] == '+')
				return (1);
			b++;
		}
		a++;
	}
	return (0);
}

int        ft_atoi_base(char *str, char *base)
{
    long int            i;
    unsigned int        size;

    size = 0;
    if (ft_erreur(base) == 1)
            return (0);
    while (base[size] != '\0')
        size++;
    i = ft_atoi(str, size, base);
    return (i);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    (void)argc;
    printf("%d", ft_atoi_base(argv[1], argv[2]));
    return (0);
}
