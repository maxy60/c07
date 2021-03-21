/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 08:16:17 by msainton          #+#    #+#             */
/*   Updated: 2021/02/25 10:55:20 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int a;
	int signe;
	int c;

	a = 0;
	signe = 1;
	c = 0;
	while (str[a] && ((str[a] > 8 && str[a] < 14) || str[a] == ' '))
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			signe = signe * -1;
		a++;
	}
	if (str[a] == '+')
		a++;
	while (str[a] > 47 && str[a] < 58)
	{
		c = c * 10 + str[a] - 48;
		a++;
	}
	c = c * signe;
	return (c);
}
