/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 13:55:05 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/22 21:58:03 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
/*
int	ft_words(char const *s, char c, int n)
{
	int	f;
	int	i;

	i = 0;
	f = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			f = 0;
		else
			f = 1;
		if (f == 1)
		{
			n++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
		{
			while (s[i] == c)
				i++;
		}
	}
	return (n);
}

static int	ft_full(char const *s, char **r, char c)
{
	int	i;
	int	k;
	int	j;

	k = 0;
	i = 0;
	j = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j++;
			k = 0;
			while (s[i] != c && s[i] != '\0')
			{
				r[j][k] = s[i];
				i++;
				k++;
			}
			r[j][k] = '\0';
		}
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	size_t	l;
	int		n;
	int		j;
	char	**r;

	j = 0;
	n = 0;
	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen(s);
	n = ft_words(s, c, n);
	r = (char**)malloc((n + 1) * sizeof(char *));
	if (r == 0)
		return (0);
	while (i <= n)
	{
		if (!(*(r + i) = (char *)malloc((l + 1) * sizeof(char))))
			return (NULL);
		i++;
	}
	j = ft_full(s, r, c);
	r[j + 1] = NULL;
	return (r);
}

*/
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
//	printf("couner: %d\n", counter(s, c));
	while (*(a + i))
	{
		printf("the %d string is: ", i);
		if(*(a + i) == (NULL))
			printf("null");
		else
			printf("%s\n", *(a + i));
		i++;
	}
	if(*(a + i) == (NULL))
		printf("the %d string is: NULL \n", i);
		//ft_putstr((void *)0);
//	printf("%s\n", *(a + 0));
//	printf("%s\n", *(a + 1));
}
*/
