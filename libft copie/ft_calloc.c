/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:36:07 by msainton          #+#    #+#             */
/*   Updated: 2021/05/27 11:07:37 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *dest;

	if (!(dest = (void *)malloc(sizeof(void) * nmemb * size)))
		return (NULL);
	ft_bzero(dest, (nmemb * size));
	return (dest);
}
