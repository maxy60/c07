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

static int	ft_error(char *dest)
{
	if (dest)
		free(dest);
	return (-1);
}

int	get_next_line(int fd, char **line)
{ 
	char		buf[BUFFER_SIZE + 1];
	static char	*dest;
	int			ret;
	
	ret = 1;
//	if (!dest)
//		dest = (char *)malloc(sizeof(char) * 1);
	if (BUFFER_SIZE < 1 || fd < 0 || !line || read(fd, NULL, 0) != 0)
		return (ft_error(dest));
	if (!dest)
		dest = (char *)malloc(sizeof(char) * 1);
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
	get_next_line(fd, &line);
	printf("line 9: %s\n", line);
	free(line);
	get_next_line(fd, &line);
	printf("line 10: %s\n", line);
	free(line);
}*/
