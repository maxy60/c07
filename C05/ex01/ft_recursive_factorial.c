/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 09:59:07 by msainton          #+#    #+#             */
/*   Updated: 2021/02/23 12:26:07 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int a;
	int result;

	a = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
