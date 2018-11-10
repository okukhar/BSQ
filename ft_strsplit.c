/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 13:55:05 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/10 17:45:51 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int			ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strcpydot(char *dst, const char *src, char c)
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

static int	counter(const char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(s + i) == c)
		i++;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			j++;
		}
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		i++;
	}
	if (*(s + ft_strlen(s) - 1) == c)
		return (j - 1);
	return (j + 1);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	char	**ret;

	ret = (char **)malloc(sizeof(char *) * (counter(s, c) + 1));
	i = 0;
	j = 0;
	while (i < counter(s, c))
		*(ret + i++) = (char *)malloc(sizeof(char) * ((ft_strlen(s) + 1)));
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
	*(ret + j) = NULL;
	return (ret);
}