/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:02:04 by msainton          #+#    #+#             */
/*   Updated: 2021/05/27 13:13:05 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (!s || len == 0)
		return (NULL);
	if (!(dest = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[a] && a < start)
		a++;
	while (s[a + b] && b < len)
	{
		dest[b] = s[a + b];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
