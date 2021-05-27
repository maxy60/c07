/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:05:10 by msainton          #+#    #+#             */
/*   Updated: 2021/05/27 14:16:26 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t a;
	size_t b;
	
	a = ft_strlen(dest);
	b = 0;
	if (size == 0)
		return (0);
	if (size - 1 <= a)
		return (size + ft_strlen(src));
	while (a + b < size - 1)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (a + ft_strlen(src));
}
