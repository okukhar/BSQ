/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:40:15 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/13 19:23:03 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && j < n && s1 + i && s2 + i)
	{
		if (*(s1 + i) < *(s2 + i))
			return (-1);
		else if (*(s1 + i) > *(s2 + i))
			return (1);
		i++;
		j++;
	}
/*	if (*(s1 + i) == '\0' && *(s2 + i) != '\0' && j > 0)
		return (-1);
	else if (*(s1 + i) != '\0' && *(s2 + i) == '\0')
		return (1);
	return (0);*/
//	printf("%d\n", (int)i);
//	printf("%c\n", *(s2 + i));
//	printf("%d\n", *(s1 + i) - *(s2 + i) - '0');
	if (*(s1 + i) != '\0' && *(s2 + i) == '\0')
		return (1);
	else if (*(s1 + i) == '\0' && *(s2 + i) != '\0')
		return (-1);
	return (0);
}
/*
int		main(int argc, char **argv)
{
//	printf("hrllo");
//	printf("%d", (int)(**(argv + 1) == '\0'));
	printf("%d\n", ft_strncmp("omg1|||||||", "omg3", 4));
}
*/
