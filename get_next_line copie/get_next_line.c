/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:56:21 by msainton          #+#    #+#             */
/*   Updated: 2021/06/22 17:13:03 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	check(char *str)
{
	size_t	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == '\n')
			return (1);
		a++;
	}
	return (0);
}

int	get_next_line(int fd, char **line)
{ 
	char		buf[BUFFER_SIZE + 1];
	static char	*dest;
	int			ret;
	
	ret = 1;
//	if (!dest)
//		dest = (char *)malloc(sizeof(char) * 1);
	if (BUFFER_SIZE <= 0 || fd == -1 || !line)
		return (-1);
	if (!dest)
		dest = (char *)malloc(sizeof(char) * 1);
//	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
//	if (!buf)
//		return (-1);
	while (ret != 0 && check(dest) == 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
		{
//			free(buf);
			return (-1);
		}
		buf[ret] = '\0';
		dest = ft_strjoin(dest, buf);
	}
//	free(buf);
	if (ret == 0)
	{
		free(dest);
		free(line);
		return (0);
	}
	*line = stock_line(dest);
	dest = stock_rest(dest);
	return (1);
}

int	main()
{
	char *line;
	int fd;

	fd = open("test.txt", O_RDONLY);
	if (get_next_line(fd, &line) == -1)
		return (0);
	printf("line 1: %s\n", line);
	free(line);
	get_next_line(fd, &line);
	printf("line 2: %s\n", line);
	free(line);
	get_next_line(fd, &line);
	printf("line 3: %s\n", line);
	free(line);
	get_next_line(fd, &line);
	printf("line 4: %s\n", line);
	free(line);
	get_next_line(fd, &line);
	printf("line 5: %s\n", line);
	free(line);
	get_next_line(fd, &line);
	printf("line 6: %s\n", line);
	free(line);
	get_next_line(fd, &line);
	printf("line 7: %s\n", line);
	free(line);
	get_next_line(fd, &line);
	printf("line 8: %s\n", line);
	free(line);
}
