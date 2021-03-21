/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:44:24 by msainton          #+#    #+#             */
/*   Updated: 2021/03/21 15:57:38 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

int	erreur(char *base)
{
	int a;
	int b;

	a = 0;
	while (base[a] != '\0')
	{
		b = a + 1;
		while (base[b] != '\0')
		{
			if (base[a] == base[b] || base[a] == '-' || base[a] == '+')
				return (1);
			b++;
		}
		a++;
	}
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + 48);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int a;

	if (erreur(base) == 1)
		return ;
	a = ft_strlen(base);

	ft_putchar(base[nbr / a]);
	ft_putchar(base[nbr % a]);
}

int main()
{
	int nbr = 15;
	char *base = "012";
	ft_putnbr_base(nbr, base);
}
