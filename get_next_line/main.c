/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:39:20 by tpokalch          #+#    #+#             */
/*   Updated: 2018/12/04 20:32:36 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("need map");
		return (0);
	}
	int fd = open(*(argv + 1), O_RDONLY);
	char *line;
	get_next_line(fd, &line);
//	get_next_line(fd, &line);
	printf("%s\n", line);
}
