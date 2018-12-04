/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:57:03 by tpokalch          #+#    #+#             */
/*   Updated: 2018/12/04 20:53:39 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

int		nonewline(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '\n')
			return (0);
		i++;
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static int a = -1;
	a++;
	printf("start gnl. a = %d\n", a);

//	*(line + (a) * BUFF_SIZE) = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
//	read(fd, *(line + (a) * BUFF_SIZE), BUFF_SIZE);
//	*(line + BUFF_SIZE) = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
//	printf("read %zd\n", read(fd, *line + BUFF_SIZE, BUFF_SIZE));
//	*line + 3 = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	*(line + a * BUFF_SIZE) = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	 read(fd, *line, BUFF_SIZE) > 0;
		printf("hi\n");
	return (1);
}
