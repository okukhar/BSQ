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

int		newline(char *s)
{
	int i;

	i = 0;
	while (*(s + i + 1) != '\0')
		i++;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '\n')
			return (i);
		i--;
	}
//	while (*(s + i) != '\0')
//		i++;
	return (0);
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

int		get_next_line(const int fd, char **line)
{
	static int a = -1;
	a++;
	printf("start gnl. a = %d\n", a);
	if (a > 0)
		*(*line + ft_strlen(*line)) = '\n';
//	*(line + (a) * BUFF_SIZE) = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
//	read(fd, *(line + (a) * BUFF_SIZE), BUFF_SIZE);
//	*(line + BUFF_SIZE) = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
//	printf("read %zd\n", read(fd, *line + BUFF_SIZE, BUFF_SIZE));
//	*line + 3 = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
//	*(line + a * BUFF_SIZE) = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	while (	(*(line + a * BUFF_SIZE) = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))) &&
		read(fd, *line + a * BUFF_SIZE, BUFF_SIZE) &&
		!newline(*line))
	{
		a++;
	}
	*(*line + newline(*line)) = '\0';
		printf("newlin %d\n", newline(*line));
//		printf("hi\n");
	return (1);
}

int             main(int argc, char **argv)
{
        if (argc == 1)
        {
                printf("need map");
                return (0);
        }
        int fd = open(*(argv + 1), O_RDONLY);
        char *line;
	get_next_line(fd, &line);
        printf("%s\n", line);
	get_next_line(fd, &line);
//	get_next_line(fd, &line);
//        printf("%s\n", line);
}
