/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:40:17 by msainton          #+#    #+#             */
/*   Updated: 2021/02/24 09:07:23 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int a;
	int b;

	a = argc - 1;
	b = 0;
	if (argc <= 1)
		return (0);
	while (a >= 1)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			write(1, &argv[a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		a--;
	}
	return (0);
}
