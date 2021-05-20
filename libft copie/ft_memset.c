/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:54:10 by msainton          #+#    #+#             */
/*   Updated: 2021/05/20 15:03:37 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;

	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
//	printf("%s\n", s);
	return (s);
}
/*int main()
{
	char *s = "salut\0";
	int c = 'k';
	printf("%s\n", (char*)ft_memset(s, c, 1);
	return (0);
}*/
