/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:07:40 by msainton          #+#    #+#             */
/*   Updated: 2021/06/18 10:32:20 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*dest;

	if (lst)
	{
		while (*lst)
		{
			dest = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = dest;
		}
	}
}
