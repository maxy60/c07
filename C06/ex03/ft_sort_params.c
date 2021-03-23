/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:01:31 by msainton          #+#    #+#             */
/*   Updated: 2021/02/24 15:10:07 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] && s2[a] && (s1[a] == s2[a]))
		a++;
	return (s1[a] - s2[a]);
}

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
	return ;
}

int		ft_print(int argc, char **argv)
{
	int a;

	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putstr("\n");
		a++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int			a;
	int			c;
	char		*stock;

	a = 1;
	if (argc <= 1)
		return (0);
	while (a < argc)
	{
		c = 1;
		while (c < argc - 1)
		{
			if (ft_strcmp(argv[a], argv[c]) < 0)
			{
				stock = argv[c];
				argv[c] = argv[a];
				argv[a] = stock;
			}
			c++;
		}
		a++;
	}
	ft_print(argc, argv);
	return (0);
}
