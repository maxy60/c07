/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:56:21 by msainton          #+#    #+#             */
/*   Updated: 2021/07/12 19:31:20 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static int	check(char *str)
{
	size_t	a;

	a = 0;
	if (!str)
		return (0);
	while (str[a])
	{
		if (str[a] == '\n')
			return (1);
		a++;
	}
	return (0);
}

static char	*ft_error(char *dest)
{
	if (dest)
	{
		free(dest);
		dest = 0;
	}
	return (NULL);
}

char	*get_next_line(int fd)
{ 
	char		buf[BUFFER_SIZE + 1];
	static char	*dest;
	char		*line;
	int			ret;
	
	ret = 1;
	if (BUFFER_SIZE < 1 || fd < 0 || read(fd, "", 0) != 0)
		return (ft_error(dest));
	if (!dest)
	{
		dest = (char *)malloc(sizeof(char) * 1);
		dest[0] = '\0';
	}
	while (ret > 0 && check(dest) == 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
			return (ft_error(dest));
		buf[ret] = '\0';
		dest = ft_strjoin(dest, buf);
	}
	line = stock_line(dest, ret);
	dest = stock_rest(dest);
	if (ret == 0)
	{
		free(dest);
		dest = 0;
		return (line);
	}
	return (line);
}

/*int	main()
{
	int		fd;
	char	*line;
	//int ret = 1;

	fd = open("41_with_nl", O_RDONLY);

	line = get_next_line(fd);
	printf("l1:[%s]", line);
	free(line);
	line = get_next_line(fd);
	printf("l2:%s", line);
	free(line);
	line = get_next_line(fd);
	printf("l3:%s", line);
	free(line);
	line = get_next_line(fd);
	printf("l4:%s", line);
	free(line);
	line = get_next_line(fd);
	printf("l5:%s", line);
	free(line);
	line = get_next_line(fd);
	printf("l6:%s", line);
	free(line);
	line = get_next_line(fd);
	printf("l7:%s", line);
	free(line);

}*/
