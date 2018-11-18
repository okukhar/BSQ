/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 13:55:05 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/11 20:49:34 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

static char			*ft_strcpydot(char *dst, const char *src, char c)
{
	int i;

	i = 0;
	while (*(src + i) != '\0' && *(src + i) != c)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}

static int			counter(const char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(s + i) == c)
		i++;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != c)
		{
			j++;
		}
		while (*(s + i) != c && *(s + i) != '\0')
			i++;
		i++;
	}
//	if (*(s + ft_strlen(s) - 1) == c)
//		return (j - 1);
	return (j);
}

char				**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	char	**ret;

	if (!(ret = (char **)malloc(sizeof(char *) * (counter(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < counter(s, c) + 1)
	{
		if (!(*(ret + i) = (char *)malloc(sizeof(char) * ((ft_strlen(s) + 1)))))
			return (NULL);
		i++;
	}
	i = 0;
	while (*(s + i) == c)
		i++;
	while (j < counter(s, c))
	{
		while (*(s + i) == c)
			i++;
		ft_strcpydot(*(ret + j), s + i, c);
		while (*(s + i) != c)
			i++;
		j++;
	}
//	printf("j is %d\n", j);
	*(ret + j) = (void *)0;
	return (ret);
}
/*
int	main(int argc, char **argv)
{
	argc = 0;
	int i = 0;
	char **a;
	char *s;
	s = *(argv + 1);
	char c;
	c = **(argv + 2);
	a = ft_strsplit(s, c);
	printf("couner: %d\n", counter(s, c));
	while (*(a + i))
	{
//		printf("the %d string is: ", i);
		if(*(a + i) == (NULL))
			printf("null");
		else
			printf("%s\n", *(a + i));
		i++;
	}
	if(*(a + i) == (NULL))
		printf("____oO0Oo____\n");
		//ft_putstr((void *)0);
//	printf("%s\n", *(a + 0));
//	printf("%s\n", *(a + 1));
}
*/
