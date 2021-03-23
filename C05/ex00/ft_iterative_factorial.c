/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 08:51:51 by msainton          #+#    #+#             */
/*   Updated: 2021/02/23 12:31:47 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int a;
	int result;

	a = 1;
	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (a < nb)
	{
		result = result * a;
		a++;
	}
	return (result);
}
