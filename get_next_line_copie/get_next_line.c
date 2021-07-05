/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:56:21 by msainton          #+#    #+#             */
/*   Updated: 2021/07/05 15:10:28 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	check(char *str)
{
	size_t	a;

	a = 0;
	if (!str)
		return (0);
	while (str[a])
	{
		if (str[a] == '\n' || str[a] == '\0')
			return (1);
		a++;
	}
	return (0);
}

static int	ft_error(char *dest)
{
	if (dest)
	{
		free(dest);
		dest = 0;
	}
	return (-1);
}

int	get_next_line(int fd, char **line)
{ 
	char		buf[BUFFER_SIZE + 1];
	static char	*dest = NULL;
	int			ret;
	
	ret = 1;
	if (BUFFER_SIZE < 1 || fd < 0 || !line || read(fd, NULL, 0) != 0)
		return (ft_error(dest));
	if (!dest)
	{
		dest = (char *)malloc(sizeof(char) * 1);
		dest[0] = '\0';
	}
	while (ret != 0 && check(dest) == 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
			return (ft_error(dest));
		buf[ret] = '\0';
		dest = ft_strjoin(dest, buf);
	}
	*line = stock_line(dest);
	dest = stock_rest(dest);
	if (ret == 0)
	{
		free(dest);
		dest = 0;
		return (0);
	}
	return (1);
}

/*int	main()
{
	char *line;
	int fd;
	int i = 1;
	int ret = 1;

	fd = open("42_with_nl", O_RDONLY);
	while ((ret = get_next_line(fd, &line)))
	{

		printf(" fuck ret = %d line %d; %s\n",ret ,i , line);
		i++;
	}
	printf("ret = %d line %d; %s\n", ret, i, line);
	get_next_line(fd, &line);
	printf("ret = %d line free: %s\n", ret, line);
	free(line);
}*/
