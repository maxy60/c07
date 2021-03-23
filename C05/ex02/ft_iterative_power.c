/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:18:48 by msainton          #+#    #+#             */
/*   Updated: 2021/02/24 15:31:16 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int a;
	int result;

	a = 0;
	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (a < power - 1)
	{
		result = (result * nb);
		a++;
	}
	return (result);
}
