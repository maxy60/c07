/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:03:00 by msainton          #+#    #+#             */
/*   Updated: 2021/05/20 15:05:23 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = dest;
	s = src;
	while (n)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dest);
}
